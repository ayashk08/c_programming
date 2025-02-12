// C Program to Swap Two Numbers
#include <stdio.h>
int main() {
    int a = 5, b = 10, swap;

    // Swapping values of a and  b
    swap = a;
    a = b;
    b = swap;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
