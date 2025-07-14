// const express = require('express');
// const fs = require('fs');
// const { exec } = require('child_process');
// const app = express();
// const PORT = 3000;

// app.use(express.static('public'));
// app.use(express.json());

// app.post('/debug', (req, res) => {
//     const code = req.body.code;

//     // 1. Save code to input.txt
//     fs.writeFileSync('input.c', code);

//     // 2. Run lex and gcc commands
//     exec('flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c', (err, stdout, stderr) => {
//         if (err) {
//             res.status(500).send(`Error: ${stderr}`);
//         } else {
//             res.send(stdout);
//         }
//     });
// });

// app.listen(PORT, () => {
//     console.log(`Server running at http://localhost:${PORT}`);
// });

// const express = require('express');
// const fs = require('fs');
// const { exec } = require('child_process');
// const app = express();
// const PORT = 3000;

// app.use(express.static('public'));
// app.use(express.json());

// app.post('/debug', (req, res) => {
//     const code = req.body.code;
//     const language = req.body.language;

//     if (!code) {
//         return res.status(400).json({ errors: 'No code provided' });
//     }

//     // Save input code to file (assumes C for now)
//     fs.writeFileSync('input.c', code);

//     // Run Flex + Bison + GCC + execute
//     const command = `flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c`;

//     exec(command, (err, stdout, stderr) => {
//         if (err) {
//             return res.status(200).json({
//                 fixedCode: "", // You can call ChatGPT API here to auto-correct
//                 errors: stderr || "Compilation or execution failed."
//             });
//         }

//         // You can parse stdout if needed, for now send it directly
//         return res.status(200).json({
//             fixedCode: code, // Original code since no auto-fix is done yet
//             errors: stdout.includes("syntax error") ? stdout : null
//         });
//     });
// });

// app.listen(PORT, () => {
//     console.log(`✅ Server running at http://localhost:${PORT}`);
// });




const express = require('express');
const fs = require('fs');
const { exec } = require('child_process');
const axios = require('axios');
require('dotenv').config();

const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

app.post('/debug', async (req, res) => {
    const code = req.body.code;
    const language = req.body.language || 'C';

    if (!code) {
        return res.status(400).json({ errors: 'No code provided' });
    }

    // 1. Save user code to file
    fs.writeFileSync('input.c', code);

    // 2. Run Flex + Bison + GCC + execute parser
    const command = `flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c`;

    exec(command, async (err, stdout, stderr) => {
        if (err || stdout.includes('syntax error')) {
            const errorMessage = stderr || stdout;

            // 3. Ask OpenAI to fix the code
            try {
                const openaiRes = await axios.post(
                    'https://api.openai.com/v1/chat/completions',
                    {
                        model: 'gpt-3.5-turbo',
                        messages: [
                            {
                                role: 'system',
                                content: 'You are a helpful assistant that fixes syntax errors in C code.'
                            },
                            {
                                role: 'user',
                                content: `Fix the following C code:\n\n${code}\n\nError:\n${errorMessage}`
                            }
                        ],
                        temperature: 0.2
                    },
                    {
                        headers: {
                            Authorization: `Bearer ${process.env.OPENAI_API_KEY}`,
                            'Content-Type': 'application/json'
                        }
                    }
                );

                const fixedCode = openaiRes.data.choices[0].message.content;

                return res.json({
                    fixedCode: fixedCode.trim(),
                    errors: errorMessage
                });

            } catch (openaiErr) {
                console.error('OpenAI API Error:', openaiErr.message);
                return res.status(500).json({
                    fixedCode: "",
                    errors: "AI correction failed. Parser output:\n" + errorMessage
                });
            }
        } else {
            // No syntax error
            return res.json({
                fixedCode: code,
                errors: null
            });
        }
    });
});

app.listen(PORT, () => {
    console.log(`✅ Server running at http://localhost:${PORT}`);
});
