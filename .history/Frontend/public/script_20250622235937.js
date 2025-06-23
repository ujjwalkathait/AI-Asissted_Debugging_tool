document.getElementById("debug-button").addEventListener("click", async () => {
    const code = document.getElementById("code-input").value;

    const response = await fetch("/", {
        method: "POST",
        headers: {
            "Content-Type": "application/json"
        },
        body: JSON.stringify({ code })
    });

    const output = await response.text();
    
    // Show the output somewhere - example using alert
    alert("Output:\n" + output);
});

document.addEventListener('DOMContentLoaded', function() {
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
        'TypeScript': 'fas fa-code',
        'PHP': 'fab fa-php',
        'Ruby': 'fas fa-gem'
    };

    // Update language icon when selection changes
    languageSelect.addEventListener('change', function() {
        const lang = this.value;
        languageIcon.className = languageIcons[lang] || 'fas fa-code';
    });

    // Debug button functionality
    debugBtn.addEventListener('click', function() {
        // Add loading animation
        debugBtn.innerHTML = '<i class="fas fa-spinner fa-spin"></i> Debugging...';
        debugBtn.disabled = true;
        
        // Simulate AI processing
        setTimeout(() => {
            // In a real app, this would be an API call to an AI service
            
            // Update UI with "results"
            debugOutput.textContent = `// Debugged code\n${codeInput.value.replace('<= arr.length', '< arr.length')}`;
            
            // Add more detailed error analysis
            errorOutput.innerHTML = '';
            // Reset button
            debugBtn.innerHTML = '<i class="fas fa-bug"></i> Debug Code';
            debugBtn.disabled = false;
            
            // Add visual feedback
            debugBtn.style.background = 'linear-gradient(135deg, #00c853, #7cfc00)';
            setTimeout(() => {
                debugBtn.style.background = 'var(--gradient)';
            }, 2000);
        }, 1500);
    });

    // Add example code when clicking in the editor
    codeInput.addEventListener('click', function() {
        if (this.value === '') {
            this.value = '';
        }
    });
    });