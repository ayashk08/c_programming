//C Program For Hexadecimal to Decimal Conversion 
#include <stdio.h>
#include <math.h>

int main() {
    char hex[20];
    int decimal = 0, len, base = 1, i;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    for(i = len - 1; i >= 0; i--) {
        if(hex[i] >= '0' && hex[i] <= '9')
            decimal += (hex[i] - 48) * base;
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            decimal += (hex[i] - 55) * base;
        base *= 16;
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
