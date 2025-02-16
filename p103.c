//C Program to Split a String into a Number of Sub-Strings
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000


void splitString(char *str, char delimiter) {
    char *token = strtok(str, &delimiter); 
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, &delimiter);
    }
}

int main() {
    char str[MAX_LENGTH];
    char delimiter;

   
    printf("Enter the string: ");
    fgets(str, MAX_LENGTH, stdin);
    str[strlen(str) - 1] = '\0'; 

   
    printf("Enter the delimiter character: ");
    scanf("%c", &delimiter);

    
    printf("The resulting sub-strings are:\n");
    splitString(str, delimiter);

    return 0;
}
