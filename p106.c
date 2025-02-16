//C Program For Double to String Conversion 
#include <stdio.h>

void doubleToString(double value, char *result) {
    sprintf(result, "%.6f", value);
}

int main() {
    double value;
    char result[50];

    printf("Enter a double value: ");
    scanf("%lf", &value);

    doubleToString(value, result);

    printf("The double as a string is: %s\n", result);

    return 0;
}
