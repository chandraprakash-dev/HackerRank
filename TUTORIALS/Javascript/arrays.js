/**
 *   Return the second largest number in the array.
 *   @param {Number[]} nums - An array of numbers.
 *   @return {Number} The second largest number in the array.
 **/
function getSecondLargest(nums) {
  // Complete the function
  let max = 0;

  for(let n of nums) {
    if(n > max) max = n;
  }

  let s = 0;

  for (let n of nums) {
    if(n > s && n < max) s = n;
  }

  return s;
}

