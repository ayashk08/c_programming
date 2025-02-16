//C Program For Long to String Conversion
#include <stdio.h>

void longToString(long value, char *result) {
    sprintf(result, "%ld", value);
}

int main() {
    long value;
    char result[50];

    printf("Enter a long value: ");
    scanf("%ld", &value);

    longToString(value, result);

    printf("The long as a string is: %s\n", result);

    return 0;
}
