//C Program to Print the First Letter of Each Word 
#include <stdio.h>
#include <ctype.h>

void printFirstLetters(char str[]) {
    int i = 0;
    
    while (str[i] != '\0') {
        if (i == 0 || (str[i-1] == ' ')) {
            printf("%c ", toupper(str[i]));
        }
        i++;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("The first letter of each word: ");
    printFirstLetters(str);
    
    return 0;
}
