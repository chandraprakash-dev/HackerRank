/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
  let consonants = [];
  let vowels = 'aeiou';
  for(let c of s) {
    if (vowels.includes(c)) console.log(c);
    else consonants.push(c);
  }
  for(let c of consonants) {
    console.log(c);
  }
}

