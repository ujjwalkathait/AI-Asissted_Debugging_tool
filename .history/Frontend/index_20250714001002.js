// const express = require('express');
// const fs = require('fs');
// const { exec } = require('child_process');
// const axios = require('axios');
// const app = express();
// const PORT = 3000;

// app.use(express.static('public'));
// app.use(express.json());

// app.post('/debug', async (req, res) => {
//     const { code, language } = req.body;

//     // Save code to input.c
//     fs.writeFileSync('input.c', code);

//     // Step 1: Compile and run parser
//     const compileAndRun = 'cmd.exe /c "flex c_lexer.l && bison -d c_parser.y && gcc -w c_parser.tab.c -o a.exe && a.exe < input.c"';


//     exec(compileAndRun, async (err, stdout, stderr) => {
//         // Case 1: Success parsing
//         if (!err && stdout.includes("Parsing complete")) {
//             return res.json({
//                 fixedCode: code,
//                 errors: null,
//                 output: stdout
//             });
//         }

//         // Case 2: Parsing failed – now use Ollama to suggest corrections
//         try {
//             const ollamaResponse = await axios.post('http://localhost:11434/api/generate', {
//                 model: "codellama",
//                 prompt: `Fix the following C/C++ code and explain the issue:\n\n${code}\n\nReturn only the corrected code followed by a brief explanation.`,
//                 stream: false
//             });

//             const fixed = ollamaResponse.data.response.trim();
//             return res.json({
//                 fixedCode: fixed,
//                 errors: stderr || "Parsing failed. AI-generated corrected code is returned.",
//                 output: stdout
//             });
//         } catch (ollamaErr) {
//             return res.status(500).json({
//                 fixedCode: null,
//                 errors: "Parsing failed and Codellama API call also failed.",
//                 details: ollamaErr.message
//             });
//         }
//     });
// });

// app.listen(PORT, () => {
//     console.log(`✅ Server running at http://localhost:${PORT}`);
// });



const express = require('express');
const fs = require('fs');
const { exec } = require('child_process');
const axios = require('axios');
const app = express();
const PORT = 3000;

// Replace this with your actual Gemini API key
const GEMINI_API_KEY = 'AIzaSyAJcjr8uK5pMMvsq0fYHnN8vNnmCAJ0o3o';
const MODEL = 'gemini-1.5-flash';

app.use(express.static('public'));
app.use(express.json());

app.post('/debug', async (req, res) => {
    const { code } = req.body;

    // Save code to input.c
    fs.writeFileSync('input.c', code);

    // Step 1: Compile and run parser
    const compileAndRun = 'cmd.exe /c "flex c_lexer.l && bison -d c_parser.y && gcc -w c_parser.tab.c -o a.exe && a.exe < input.c"';

    exec(compileAndRun, async (err, stdout, stderr) => {
        // Case 1: Parsing successful
        if (!err && stdout.includes("Parsing complete")) {
            conso
            return res.json({
                fixedCode: code,
                errors: null,
                output: stdout
            });
        }

        // Case 2: Parsing failed — use Gemini to suggest fix
        try {
            const prompt = `Fix the following C code and explain the issue:\n\n${code}\n\nReturn only the corrected code followed by a brief explanation.`;

            const geminiResponse = await axios.post(
                `https://generativelanguage.googleapis.com/v1/models/${MODEL}:generateContent?key=${GEMINI_API_KEY}`,
                {
                    contents: [
                        {
                            parts: [{ text: prompt }]
                        }
                    ]
                }
            );

            const geminiText = geminiResponse.data.candidates?.[0]?.content?.parts?.[0]?.text || '';

            // Attempt to extract corrected code if wrapped in ``` blocks
            const split = geminiText.split('```');
            const fixedCode = split.length > 1 ? split[1] : geminiText;
            const explanation = geminiText.replace(fixedCode, '').trim();

            return res.json({
                fixedCode: fixedCode.trim(),
                errors: stderr || "Parsing failed. AI-generated correction provided.",
                output: stdout,
                explanation
            });
        } catch (apiErr) {
            return res.status(500).json({
                fixedCode: null,
                errors: "Parsing failed and Gemini API call also failed.",
                details: apiErr.message
            });
        }
    });
});

app.listen(PORT, () => {
    console.log(`✅ Server running at http://localhost:${PORT}`);
});
