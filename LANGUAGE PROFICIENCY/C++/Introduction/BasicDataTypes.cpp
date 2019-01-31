#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n;
    long l;
    char c;
    float f;
    double d;
    scanf("%d%ld%*c%c%f%lf", &n, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", n , l, c, f, d);
    return 0;
}

