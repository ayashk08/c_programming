//C Program For Octal to Decimal Conversion 
#include <stdio.h>
#include <math.h>

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;

    
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        octal /= 10;
        i++;
    }

    return decimal;
}

int main() {
    int octal, decimal;


    printf("Enter an octal number: ");
    scanf("%d", &octal);

    
    decimal = octalToDecimal(octal);


    printf("The decimal equivalent of octal number %d is: %d\n", octal, decimal);

    return 0;
}
