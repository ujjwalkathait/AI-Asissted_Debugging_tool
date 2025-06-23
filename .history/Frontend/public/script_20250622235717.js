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