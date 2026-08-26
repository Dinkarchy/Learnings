const text = document.getElementById("text");
const button = document.getElementById("button");

button.addEventListener("click", function() {
    text.textContent = "Text has been changed!";
});
