#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int amax, omax, xmax;
  amax = omax = xmax = 0;
  for(int i = 1; i < n; i ++) {
      for(int j = i+1; j <= n; j ++) {
        amax = (i & j) > amax && (i & j) < k ? i & j : amax;
        omax = (i | j) > omax && (i | j) < k ? i | j : omax;
        xmax = (i ^ j) > xmax && (i ^ j) < k ? i ^ j : xmax; 
      }
  }
  printf("%d\n", amax);
  printf("%d\n", omax);
  printf("%d\n", xmax);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

