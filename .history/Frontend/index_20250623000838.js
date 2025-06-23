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
    fs.writeFileSync('input.txt', code);

    // 2. Run lex and gcc commands
    exec('flex c_lexer.l && bison -d c_parser.y && gcc y.tab.c -o lexer && ./lexer < input.txt', (err, stdout, stderr) => {
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