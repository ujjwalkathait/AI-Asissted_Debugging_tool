const axios = require('axios');

const GEMINI_API_KEY = '❌ Gemini API Error:
 {
  error: {
    code: 400,
    message: 'API key not valid. Please pass a valid API key.',
    status: 'INVALID_ARGUMENT',
    details: [ [Object], [Object] ]
  }
}';
const prompt = `Fix this C code:\n\nint main() {\nprintf("Hello)\nreturn 0;\n}`;

axios.post(
  `https://generativelanguage.googleapis.com/v1/models/gemini-pro:generateContent?key=${GEMINI_API_KEY}`,
  {
    contents: [{ parts: [{ text: prompt }] }]
  }
).then(res => {
  console.log("✅ Gemini Response:\n", res.data.candidates[0].content.parts[0].text);
}).catch(err => {
  console.error("❌ Gemini API Error:\n", err.response?.data || err.message);
});
