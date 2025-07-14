const express = require('express');
const fs = require('fs');
const { exec } = require('child_process');
const axios = require('axios');
const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

app.post('/debug', async (req, res) => {
    const { code, language } = req.body;

    // Save code to input.c
    fs.writeFileSync('input.c', code);

    // Step 1: Compile and run parser
    const compileAndRun = 'cmd.exe /c "flex c_lexer.l && bison -d c_parser.y && gcc -w c_parser.tab.c -o a.exe && a.exe < input.c"';


    exec(compileAndRun, async (err, stdout, stderr) => {
        // Case 1: Success parsing
        if (!err && stdout.includes("Parsing complete")) {
            return res.json({
                fixedCode: code,
                errors: null,
                output: stdout
            });
        }

        // Case 2: Parsing failed – now use Ollama to suggest corrections
        try {
            const ollamaResponse = await axios.post('http://localhost:11434/api/generate', {
                model: "codellama",
                prompt: `Fix the following C/C++ code and explain the issue:\n\n${code}\n\nReturn only the corrected code followed by a brief explanation.`,
                stream: false
            });

            const fixed = ollamaResponse.data.response.trim();
            return res.json({
                fixedCode: fixed,
                errors: stderr || "Parsing failed. AI-generated corrected code is returned.",
                output: stdout
            });
        } catch (ollamaErr) {
            return res.status(500).json({
                fixedCode: null,
                errors: "Parsing failed and Codellama API call also failed.",
                details: ollamaErr.message
            });
        }
    });
});

app.listen(PORT, () => {
    console.log(`✅ Server running at http://localhost:${PORT}`);
});

