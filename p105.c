//C Program For Float to String Conversion
#include <stdio.h>

void floatToString(float value, char *result) {
    sprintf(result, "%.2f", value);
}

int main() {
    float value;
    char result[20];

    printf("Enter a float value: ");
    scanf("%f", &value);

    floatToString(value, result);

    printf("The float as a string is: %s\n", result);

    return 0;
}
