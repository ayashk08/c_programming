//C Program For Char to Int Conversion 
#include <stdio.h>

int charToInt(char c) {
    return (int) c;
}

int main() {
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = charToInt(c);

    printf("The integer value of the character '%c' is: %d\n", c, result);

    return 0;
}
