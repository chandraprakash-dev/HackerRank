/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 *
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
  const area = expressions[0];
  const perimeter = expressions[1];

  const d = Math.sqrt(perimeter * perimeter - 16 * area);

  const s1 = (perimeter + d) / 4;
  const s2 = area / s1;

  return [s1, s2].sort();
}

