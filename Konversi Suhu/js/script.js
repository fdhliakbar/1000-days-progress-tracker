let currentSuhuType = "Celcius";

function celciusToFahrenheit(celcius) {
  let fahrenheit = (celcius * 9) / 5 + 32; // T (° F) = T (° C) × 9/5 + 32
  return fahrenheit.toFixed(2);
}

function fahrenheitToCelcius(fahrenheit) {
  let celcius = ((fahrenheit - 32) * 5) / 9;
  return celcius.toFixed(2);
}

function reverse() {
  let inputField = document.getElementById("inputField");
  let outputField = document.getElementById("outputField");
  let calculationField = document.getElementById("calculationField");

  if (currentSuhuType === "Celcius") {
    currentSuhuType = "Fahrenheit";
    inputField.placeholder = "Fahrenheit(F)";
    outputField.placeholder = "Celcius(C)";
    calculationField.value += "Reverse conversion from Celcius to Fahrenheit\n";
  } else {
    currentSuhuType = "Celcius";
    inputField.placeholder = "Celcius(C)";
    outputField.placeholder = "Fahrenheit(F)";
    calculationField.value += "Reverse conversion from Fahrenheit to Celcius\n";
  }

  let temp = inputField.value;
  inputField.value = outputField.value;
  outputField.value = temp;

  konversi();
}

function reset() {
  let inputField = document.getElementById("inputField");
  let outputField = document.getElementById("outputField");
  let calculationField = document.getElementById("calculationField");

  inputField.value = "";
  outputField.value = "";
  calculationField.value = "";

  currentSuhuType = "Celcius";
  inputField.placeholder = "Celcius(C)";
  outputField.placeholder = "Fahrenheit(F)";
}

function konversi() {
  let inputField = document.getElementById("inputField");
  let outputField = document.getElementById("outputField");
  let calculationField = document.getElementById("calculationField");

  let suhu = parseFloat(inputField.value);
  if (isNaN(suhu)) {
    alert("Input is not a number");
    return;
  }

  let result;
  let rumus;

  if (currentSuhuType === "Celcius") {
    result = celciusToFahrenheit(suhu);
    rumus = `(${suhu} °C x 9/5) + 32 = ${result} °F\n`;
  } else {
    result = fahrenheitToCelcius(suhu);
    rumus = `(${suhu} °F - 32) x 5/9 = ${result} °C\n`;
  }

  outputField.value = result;
  calculationField.value = rumus;
}
