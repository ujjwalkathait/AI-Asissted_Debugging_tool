const axios = require('axios');

const GEMINI_API_KEY = 'YOUR_REAL_KEY';
const prompt = `Fix this C code:\n\nint main() {\nprintf("Hello)\nreturn 0;\n}`;

axios.post(
  `https://generativelanguage.googleapis.com/v1beta/models/gemini-pro:generateContent?key=${GEMINI_API_KEY}`,
  {
    contents: [{ parts: [{ text: prompt }] }]
  }
).then(res => {
  console.log("✅ Gemini Response:\n", res.data.candidates[0].content.parts[0].text);
}).catch(err => {
  console.error("❌ Gemini API Error:\n", err.response?.data || err.message);
});
