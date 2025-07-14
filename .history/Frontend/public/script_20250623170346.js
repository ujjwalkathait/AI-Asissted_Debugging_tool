// document.getElementById("debug-button").addEventListener("click", async () => {
//     const code = document.getElementById("code-input").value;

//     const response = await fetch("/debug", {
//         method: "POST",
//         headers: {
//             "Content-Type": "application/json"
//         },
//         body: JSON.stringify({ code })
//     });

//     const output = await response.text();
    
//     // Show the output somewhere - example using alert
//     alert("Output:\n" + output);
// });

// document.addEventListener('DOMContentLoaded', function() {
//     const debugBtn = document.getElementById('debug-button');
//     const codeInput = document.getElementById('code-input');
//     const debugOutput = document.getElementById('debug-output');
//     const errorOutput = document.getElementById('error-output');
//     const languageSelect = document.getElementById('language-select');
//     const languageIcon = document.querySelector('.language-icon i');

//     // Language icons mapping
//     const languageIcons = {
//         'JavaScript': 'fab fa-js',
//         'Python': 'fab fa-python',
//         'Java': 'fab fa-java',
//         'C++': 'fas fa-c',
//         'TypeScript': 'fas fa-code',
//         'PHP': 'fab fa-php',
//         'Ruby': 'fas fa-gem'
//     };

//     // Update language icon when selection changes
//     languageSelect.addEventListener('change', function() {
//         const lang = this.value;
//         languageIcon.className = languageIcons[lang] || 'fas fa-code';
//     });

//     // Debug button functionality
//     debugBtn.addEventListener('click', function() {
//         // Add loading animation
//         debugBtn.innerHTML = '<i class="fas fa-spinner fa-spin"></i> Debugging...';
//         debugBtn.disabled = true;
        
//         // Simulate AI processing
//         setTimeout(() => {
//             // In a real app, this would be an API call to an AI service
            
//             // Update UI with "results"
//             debugOutput.textContent = `// Debugged code\n${codeInput.value.replace('<= arr.length', '< arr.length')}`;
            
//             // Add more detailed error analysis
//             errorOutput.innerHTML = '';
//             // Reset button
//             debugBtn.innerHTML = '<i class="fas fa-bug"></i> Debug Code';
//             debugBtn.disabled = false;
        
//             // Add visual feedback
//             debugBtn.style.background = 'linear-gradient(135deg, #00c853, #7cfc00)';
//             setTimeout(() => {
//                 debugBtn.style.background = 'var(--gradient)';
//             }, 2000);
//         }, 1500);
//     });

//     // Add example code when clicking in the editor
//     codeInput.addEventListener('click', function() {
//         if (this.value === '') {
//             this.value = '';
//         }
//     });
//     });





document.addEventListener('DOMContentLoaded', function () {
    const debugBtn = document.getElementById('debug-button');
    const codeInput = document.getElementById('code-input');
    const debugOutput = document.getElementById('debug-output');
    const errorOutput = document.getElementById('error-output');
    const languageSelect = document.getElementById('language-select');
    const languageIcon = document.querySelector('.language-icon i');

    // Language icons mapping
    const languageIcons = {
        'JavaScript': 'fab fa-js',
        'Python': 'fab fa-python',
        'Java': 'fab fa-java',
        'C++': 'fas fa-c',
        'C': 'fas fa-c',
        'TypeScript': 'fas fa-code',
        'PHP': 'fab fa-php',
        'Ruby': 'fas fa-gem'
    };

    // Update language icon when selection changes
    languageSelect.addEventListener('change', function () {
        const lang = this.value;
        languageIcon.className = languageIcons[lang] || 'fas fa-code';
    });

    // Debug button functionality
    debugBtn.addEventListener('click', async function () {
        const code = codeInput.value;
        const language = languageSelect.value;

        // UI feedback
        debugBtn.innerHTML = '<i class="fas fa-spinner fa-spin"></i> Debugging...';
        debugBtn.disabled = true;
        debugOutput.textContent = '';
        errorOutput.innerHTML = '';

        try {
            const response = await fetch("http://localhost:3000/debug", {
                method: "POST",
                headers: {
                    "Content-Type": "application/json"
                },
                body: JSON.stringify({ code, language })
            });

            if (!response.ok) {
                throw new Error("Server error while debugging.");
            }

            const result = await response.json();

            // Show corrected code
            debugOutput.textContent = result.fixedCode || "// No corrections found.";

            // Show errors or success
            if (result.errors) {
                errorOutput.innerHTML = `<pre style="color:red;">${result.errors}</pre>`;
            } else {
                errorOutput.innerHTML = `<pre style="color:lightgreen;">✅ No syntax errors detected.</pre>`;
            }

        } catch (err) {
            errorOutput.innerHTML = `<pre style="color:red;">⚠️ Error: ${err.message}</pre>`;
        } finally {
            // Reset button state
            debugBtn.innerHTML = '<i class="fas fa-bug"></i> Debug Code';
            debugBtn.disabled = false;
            debugBtn.style.background = 'linear-gradient(135deg, #00c853, #7cfc00)';
            setTimeout(() => {
                debugBtn.style.background = 'var(--gradient)';
            }, 2000);
        }
    });

    // Add example code when clicking in the editor
    codeInput.addEventListener('click', function () {
        if (this.value === '') {
            this.value = '';
        }
    });
});

