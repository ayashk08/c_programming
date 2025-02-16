//C Program For Decimal to Binary Conversion 
#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
