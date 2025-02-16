//C Program For String to Long Conversion
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    long result;

    printf("Enter a string representing a number: ");
    fgets(str, sizeof(str), stdin);

    result = strtol(str, NULL, 10);

    printf("The converted long value is: %ld\n", result);

    return 0;
}
