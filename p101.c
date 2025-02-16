//C Program to Compare Two Strings Lexicographically 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if(result < 0) {
        printf("'%s' is lexicographically smaller than '%s'.\n", str1, str2);
    } else if(result > 0) {
        printf("'%s' is lexicographically greater than '%s'.\n", str1, str2);
    } else {
        printf("Both strings are lexicographically equal.\n");
    }

    return 0;
}
