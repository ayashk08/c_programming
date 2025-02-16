//C Program For Decimal to Octal Conversion
#include <stdio.h>

int main() {
    int decimal, octal = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        octal += (decimal % 8) * place;
        decimal /= 8;
        place *= 10;
    }

    printf("Octal equivalent: %d\n", octal);

    return 0;
}
