//C Program For Int to Char Conversion 
#include <stdio.h>

void intToChar(int value, char *result) {
    *result = (char) value;
}

int main() {
    int value;
    char result;

    printf("Enter an integer value: ");
    scanf("%d", &value);

    intToChar(value, &result);

    printf("The integer as a character is: %c\n", result);

    return 0;
}
