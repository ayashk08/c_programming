//C Program to Find G.C.D Using Recursion
#include <math.h>
#include <stdio.h>
int gcd(int a, int b)
{
    
    int result = ((a < b) ? a : b);
    while (result > 0) {
    
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }

    return result;
}

int main()
{
    int a, b;
    printf("enter 2 number: ");
    scanf("%d%d",&a,&b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
