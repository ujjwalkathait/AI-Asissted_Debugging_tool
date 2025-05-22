document.getElementById("b1").addEventListener("click", async () => {
    const code = document.getElementById("codeInput").value;

    const response = await fetch("/debug", {
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