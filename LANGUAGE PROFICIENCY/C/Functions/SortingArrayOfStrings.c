#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
    return (strcmp(a, b));
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return (strcmp(b, a));
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int count[2] = {0};      //  array to maintain count of characters in a, b
    
    int presencea[26] = {0}; //  array to check presence of a character
    for (int j = 0; j < strlen(a); j++) {
        if (a[j] != ' ' && presencea[a[j] - 97] == 0) {
            presencea[a[j] - 97] = 1;
            count[0]++;
        }
    }

    int presenceb[26] = {0}; //  array to check presence of a character
    for (int j = 0; j < strlen(b); j++) {
        if (b[j] != ' ' && presenceb[b[j] - 97] == 0) {
            presenceb[b[j] - 97] = 1;
            count[1]++;
        }
    }

    if (count[0] > count[1] || (count[0] == count[1] && strcmp(a, b) > 0) ) return 1;
    else return 0;
}

int sort_by_length(const char* a, const char* b) {
    if(strlen(a) > strlen(b) ){
        return 1;
    } else if(strlen(a) == strlen(b)){
        if(strcmp(a, b) > 0) return 1;
        else return 0;
    } else return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){
    char * tmp;
    for(int i = 0; i < len - 1; i ++) {
        for (int j = i + 1; j < len ; j ++) 
            if(cmp_func(arr[i], arr[j] ) > 0){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp; 
        }
    }    
}


int main() 
{
    int n;
    scanf("%d", &n);
  
    char** arr;
	arr = (char**)malloc(n * sizeof(char*));
  
    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }
  
    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);    
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]); 
    printf("\n");
}
