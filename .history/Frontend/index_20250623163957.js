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

const express = require('express');
const fs = require('fs');
const { exec } = require('child_process');
const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

app.post('/debug', (req, res) => {
    const code = req.body.code;
    const language = req.body.language;

    if (!code) {
        return res.status(400).json({ errors: 'No code provided' });
    }

    // Save input code to file (assumes C for now)
    fs.writeFileSync('input.c', code);

    // Run Flex + Bison + GCC + execute
    const command = `flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c`;

    exec(command, (err, stdout, stderr) => {
        if (err) {
            return res.status(200).json({
                fixedCode: "", // You can call ChatGPT API here to auto-correct
                errors: stderr || "Compilation or execution failed."
            });
        }

        // You can parse stdout if needed, for now send it directly
        return res.status(200).json({
            fixedCode: code, // Original code since no auto-fix is done yet
            errors: stdout.includes("syntax error") ? stdout : null
        });
    });
});

app.listen(PORT, () => {
    console.log(`✅ Server running at http://localhost:${PORT}`);
});
