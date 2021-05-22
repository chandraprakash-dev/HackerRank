/*
 * Create the function factorial here
 */
function factorial(n) {
  let ans = n;
  for(let i = n - 1; i > 1; i --) {
    ans *= i;
  }
  return ans;
}

