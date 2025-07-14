const express = require('express');
const fs = require('fs');
const { exec } = require('child_process');
const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

app.post('/debug', (req, res) => {
    const code = req.body.code;

    // 1. Save code to input.txt
    fs.writeFileSync('input.c', code);

    // 2. Run lex and gcc commands
    exec('flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c', (err, stdout, stderr) => {
        if (err) {
            res.status(500).send(`Error: ${stderr}`);
        } else {
            res.send(stdout);
        }
    });
});

app.listen(PORT, () => {
    console.log(`Server running at http://localhost:${PORT}`);
});


const express = require('express');
const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

const fetch = (...args) => import('node-fetch').then(({default: fetch}) => fetch(...args)); // For Node < 18

app.post('/debug', async (req, res) => {
    const { code } = req.body;

    try {
        const prompt = `Fix the following C code and explain the issue:\n\n${code}\n\nReturn only the corrected code followed by a brief explanation.`;

        const response = await fetch('http://localhost:11434/api/generate', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify({
                model: 'codellama', // or any model you pulled (like mistral)
                prompt,
                stream: false
            })
        });

        const data = await response.json();

        const fullResponse = data.response;

        // Split corrected code and explanation (optional)
        const split = fullResponse.split('```');
        const fixedCode = split[1] || fullResponse;
        const explanation = fullResponse.replace(fixedCode, '').trim();

        res.json({
            fixedCode: fixedCode.trim(),
            errors: explanation.trim()
        });

    } catch (error) {
        console.error("Ollama error:", error);
        res.status(500).json({ error: "Failed to get response from Ollama" });
    }
});

app.listen(PORT, () => {
    console.log(`🚀 Server running at http://localhost:${PORT}`);
});
