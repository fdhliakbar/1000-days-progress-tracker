const quoteText = document.querySelector(".quote"),
  auothorName = document.querySelector(".author .name"),
  quoteBtn = document.querySelector("button"),
  soundBtn = document.querySelector(".sound"),
  copyBtn = document.querySelector(".copy"),
  githubBtn = document.querySelector(".github");

//random quote function
function randomQuote() {
  quoteBtn.classList.add("loading");
  quoteBtn.innerText = "Loading Quote...";
  // fetching random data from the API api.quotable.io/random
  fetch("https://api.quotable.io/random")
    .then((res) => res.json())
    .then((result) => {
      quoteText.innerText = result.content;
      auothorName.innerText = result.author;
      quoteBtn.innerText = "New Quote";
      quoteBtn.classList.remove("loading");
    });
}

soundBtn.addEventListener("click", () => {
  // the SpeechSynthesisUtterance is a web speech api that represents speech a speech request is
  let utterance = new SpeechSynthesisUtterance(
    `${quoteText.innerText} by ${auothorName.innerText}`
  );
  speechSynthesis.speak(utterance); //speak method of speechSynthesis speak the utterance
});

copyBtn.addEventListener("click", () => {
  // Copying the quote text on copyBtn click
  navigator.clipboard.writeText(quoteText.innerText);
});

githubBtn.addEventListener("click", () => {
  let githubUrl = "https://github.com/fdhliakbar";
  window.open(githubUrl, "_blank");
});

quoteBtn.addEventListener("click", randomQuote);
