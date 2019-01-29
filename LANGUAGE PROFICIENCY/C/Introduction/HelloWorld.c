#include <stdio.h>
int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
    // [^\n] - everything upto \n, but not \n
    // %c - scan \n
    // * - discard what is scanned

    /* Enter your code here. Read input from STDIN. Print output to STDOUT*/
    printf("Hello, World!\n");
    printf("%s", s);
    return 0;
}
