//C Program For Boolean to String Conversion 
#include <stdio.h>
#include <stdbool.h>

void booleanToString(bool value, char *result) {
    if (value) {
        strcpy(result, "true");
    } else {
        strcpy(result, "false");
    }
}

int main() {
    bool value;
    char result[6];

    printf("Enter 1 for true or 0 for false: ");
    scanf("%d", &value);

    booleanToString(value, result);

    printf("The boolean as a string is: %s\n", result);

    return 0;
}
