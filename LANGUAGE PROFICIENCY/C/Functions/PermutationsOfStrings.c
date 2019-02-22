#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
  // This is a standard algorithm to generate permutations of a sequence in
  // lexicographic order
  // Use this to understand how the algorithm works     https://en.wikipedia.org/wiki/Permutation#Generation_in_lexicographic_order

  int k, l;
  // 1. find the largest index k such that s[k] < s[k+1]
  for (k = n - 2; k >= 0; k --) {
    if(strcmp(s[k], s[k+1]) < 0) break;
  }
  if (k < 0) return 0;

  // 2. find the largest index l greater than k such that s[k] < s[l]
  for (l = n -1; l > k; l --) {
    if(strcmp(s[k], s[l]) < 0) break;
  }

  // 3. swap elements present at k, l
  char * tmp = s[k];
  s[k] = s[l];
  s[l] = tmp;

  // 4. reverse the sequence of elements from k+1 to n
  for(int i = k + 1, j = n -1; i < j; i ++, j --) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
  }
  return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
