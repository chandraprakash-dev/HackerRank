#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function   
    int t = *a;
    *a = *a + *b;
    *b = t > *b ? t - *b : *b - t;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
