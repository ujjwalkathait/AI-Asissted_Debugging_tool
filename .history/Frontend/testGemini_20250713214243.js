const axios = require('axios');

const GEMINI_API_KEY = 'AIzaSyAJcjr8uK5pMMvsq0fYHnN8vNnmCAJ0o3o';
const MODEL = 'gemini-1.5-fk'; // use value from your /models response
const prompt = `Fix this C code:\n\nint main() {\nprintf("Hello)\nreturn 0;\n}`;

axios.post(
  `https://generativelanguage.googleapis.com/v1/models/${MODEL}:generateContent?key=${GEMINI_API_KEY}`,
  {
    contents: [{ parts: [{ text: prompt }] }]
  }
).then(res => {
  console.log("✅ Gemini Response:\n", res.data.candidates[0].content.parts[0].text);
}).catch(err => {
  console.error("❌ Gemini API Error:\n", err.response?.data || err.message);
});
