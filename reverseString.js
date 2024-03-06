function inverterString(str) {
  let invertida = '';
  for (let i = str.length - 1; i >= 0; i--) {
      invertida += str[i];
  }
  return invertida;
}

// Exemplo de uso
let minhaString = "Olá, mundo!";
let stringInvertida = inverterString(minhaString);
console.log("String original:", minhaString);
console.log("String invertida:", stringInvertida);
