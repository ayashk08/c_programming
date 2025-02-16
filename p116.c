//C Program For Binary to Decimal Conversion
#include <stdio.h>
#include <math.h>

int main() {
    char binary[32];
    int decimal = 0, length, i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    length = strlen(binary);

    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
