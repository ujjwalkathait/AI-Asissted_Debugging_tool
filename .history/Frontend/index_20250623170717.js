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




// const express = require('express');
// const fs = require('fs');
// const { exec } = require('child_process');
// const axios = require('axios');
// require('dotenv').config();

// const app = express();
// const PORT = 3000;

// app.use(express.static('public'));
// app.use(express.json());

// app.post('/debug', async (req, res) => {
//     const code = req.body.code;
//     const language = req.body.language || 'C';

//     if (!code) {
//         return res.status(400).json({ errors: 'No code provided' });
//     }

//     // 1. Save user code to file
//     fs.writeFileSync('input.c', code);

//     // 2. Run Flex + Bison + GCC + execute parser
//     const command = `flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c`;

//     exec(command, async (err, stdout, stderr) => {
//         if (err || stdout.includes('syntax error')) {
//             const errorMessage = stderr || stdout;

//             // 3. Ask OpenAI to fix the code
//             try {
//                 const openaiRes = await axios.post(
//                     'https://api.openai.com/v1/chat/completions',
//                     {
//                         model: 'gpt-3.5-turbo',
//                         messages: [
//                             {
//                                 role: 'system',
//                                 content: 'You are a helpful assistant that fixes syntax errors in C code.'
//                             },
//                             {
//                                 role: 'user',
//                                 content: `Fix the following C code:\n\n${code}\n\nError:\n${errorMessage}`
//                             }
//                         ],
//                         temperature: 0.2
//                     },
//                     {
//                         headers: {
//                             Authorization: `Bearer ${process.env.OPENAI_API_KEY}`,
//                             'Content-Type': 'application/json'
//                         }
//                     }
//                 );

//                 const fixedCode = openaiRes.data.choices[0].message.content;

//                 return res.json({
//                     fixedCode: fixedCode.trim(),
//                     errors: errorMessage
//                 });

//             } catch (openaiErr) {
//                 console.error('OpenAI API Error:', openaiErr.message);
//                 return res.status(500).json({
//                     fixedCode: "",
//                     errors: "AI correction failed. Parser output:\n" + errorMessage
//                 });
//             }
//         } else {
//             // No syntax error
//             return res.json({
//                 fixedCode: code,
//                 errors: null
//             });
//         }
//     });
// });

// app.listen(PORT, () => {
//     console.log(`✅ Server running at http://localhost:${PORT}`);
// });




// require('dotenv').config();
// const express = require('express');
// const fs = require('fs');
// const { exec } = require('child_process');
// const axios = require('axios');
// const app = express();
// const PORT = 3000;

// app.use(express.static('public'));
// app.use(express.json());

// app.post('/debug', async (req, res) => {
//   const code = req.body.code;
//   fs.writeFileSync('input.c', code);

//   exec(
//     'flex c_lexer.l && bison -d c_parser.y && gcc c_parser.tab.c -o lexer && ./lexer < input.c',
//     async (err, stdout, stderr) => {
//       if (err || stderr) {
//         const errorMessage = stderr || err.message;

//         try {
//           const fixedCode = await callOpenAI(code, errorMessage);
//           res.send(`🛠 AI Fixed Code:\n\n${fixedCode}\n\n❌ Error:\n${errorMessage}`);
//         } catch (e) {
//           res.status(500).send(`OpenAI Error: ${e.message}`);
//         }
//       } else {
//         res.send(`✅ Compilation Successful!\n\n${stdout}`);
//       }
//     }
//   );
// });

// // Retry logic for OpenAI API
// async function callOpenAI(code, errorMessage) {
//   const payload = {
//     model: 'gpt-3.5-turbo',
//     messages: [
//       {
//         role: 'system',
//         content: 'You are a helpful assistant that fixes syntax errors in C code.'
//       },
//       {
//         role: 'user',
//         content: `Fix this C code:\n\n${code}\n\nCompiler Error:\n${errorMessage}`
//       }
//     ],
//     temperature: 0.2
//   };

//   const headers = {
//     Authorization: `Bearer ${process.env.OPENAI_API_KEY}`,
//     'Content-Type': 'application/json'
//   };

//   for (let attempt = 1; attempt <= 3; attempt++) {
//     try {
//       const res = await axios.post(
//         'https://api.openai.com/v1/chat/completions',
//         payload,
//         { headers }
//       );
//       return res.data.choices[0].message.content;
//     } catch (error) {
//       if (error.response && error.response.status === 429) {
//         console.warn(`⚠️ Rate limit hit. Retrying in ${attempt * 2}s...`);
//         await new Promise((r) => setTimeout(r, attempt * 2000));
//       } else {
//         throw error;
//       }
//     }
//   }

//   throw new Error('OpenAI API failed after 3 retries.');
// }

// app.listen(PORT, () => {
//   console.log(`🚀 Server running at http://localhost:${PORT}`);
// });





require('dotenv').config();
const express = require('express');
const fs = require('fs');
const { Configuration, OpenAIApi } = require('openai');
const app = express();
const PORT = 3000;

app.use(express.static('public'));
app.use(express.json());

const openai = new OpenAIApi({
  apiKey: process.env.OPENAI_API_KEY
});

app.post('/debug', async (req, res) => {
  const code = req.body.code;

  try {
    const prompt = `Fix the syntax errors in the following C code and explain what was wrong:\n\n${code}`;
    const response = await openai.createChatCompletion({
      model: "gpt-3.5-turbo",
      messages: [{ role: "user", content: prompt }]
    });

    const aiMessage = response.data.choices[0].message.content;

    const [fixedCode, ...explanation] = aiMessage.split("Explanation:");

    res.json({
      fixedCode: fixedCode.trim(),
      errors: explanation.length > 0 ? explanation.join("Explanation:").trim() : null
    });

  } catch (err) {
    console.error("OpenAI Error:", err.message);
    res.status(500).json({ error: "OpenAI API Error: " + err.message });
  }
});

app.listen(PORT, () => {
  console.log(`Server running on http://localhost:${PORT}`);
});


