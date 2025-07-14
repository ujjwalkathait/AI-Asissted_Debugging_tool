function escapeHtml(unsafe) {
  return unsafe
    .replace(/&/g, "&amp;")
    .replace(/</g, "&lt;")
    .replace(/>/g, "&gt;");
}
document.addEventListener('DOMContentLoaded', function () {
    const editor = CodeMirror.fromTextArea(
        document.getElementById('code-input'),
        {
            mode: 'text/x-csrc',        // default to C
            lineNumbers: true,
            theme: 'default',
            autoCloseBrackets: true,
            matchBrackets: true,
            tabSize: 4,
            indentUnit: 4
        }
    );

    const debugBtn = document.getElementById('debug-button');
    const codeInput = document.getElementById('code-input');
    const debugOutput = document.getElementById('debug-output');
    const errorOutput = document.getElementById('error-output');
    const languageSelect = document.getElementById('language-select');
    const languageIcon = document.querySelector('.language-icon i');

    const languageIcons = {
        'JavaScript': 'fab fa-js',
        'Python': 'fab fa-python',
        'Java': 'fab fa-java',
        'C++': 'fas fa-c++',
        'C': 'fas fa-c',
        'TypeScript': 'fas fa-code',
        'PHP': 'fab fa-php',
        'Ruby': 'fas fa-gem'
    };

    languageSelect.addEventListener('change', function () {
        const lang = this.value;
        languageIcon.className = languageIcons[lang] || 'fas fa-code';
    });

    debugBtn.addEventListener('click', async function () {
        const code = codeInput.value.trim();
        const language = languageSelect.value;

        if (!code) {
            errorOutput.innerHTML = `<pre style="color:orange;">⚠️ Please enter some code before debugging.</pre>`;
            return;
        }

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
            debugOutput.innerHTML = `<pre>${escapeHtml(result.fixedCode) || "// No corrections found."}</pre>`;

            if (result.errors) {
                errorOutput.innerHTML = `<pre style="color:red;">${result.errors}</pre>`;
            } else {
                errorOutput.innerHTML = `<pre style="color:lightgreen;">✅ No syntax errors detected.</pre>`;
            }

            if (result.explanation) {
                errorOutput.innerHTML += `<br><pre style="color:deepskyblue;">💡 Gemini says: ${result.explanation}</pre>`;
            }

        } catch (err) {
            errorOutput.innerHTML = `<pre style="color:red;">⚠️ Error: ${err.message}</pre>`;
        } finally {
            debugBtn.innerHTML = '<i class="fas fa-bug"></i> Debug Code';
            debugBtn.disabled = false;
            debugBtn.style.background = 'linear-gradient(135deg, #00c853, #7cfc00)';
            setTimeout(() => {
                debugBtn.style.background = 'var(--gradient)';
            }, 2000);
        }
    });

    codeInput.addEventListener('click', function () {
        if (this.value === '') {
            this.value = '';
        }
    });
});
