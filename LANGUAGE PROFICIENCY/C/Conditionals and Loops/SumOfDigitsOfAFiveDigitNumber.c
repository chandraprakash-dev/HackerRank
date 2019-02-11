#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum = 0;
    scanf("%d", &n);
    while(n > 0) {
        sum += n %10;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}


