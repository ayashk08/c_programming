//C Program to Find All Roots of a Quadratic Equation
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void roots(int a,int b,int c){
    if (a==0)
    {
        printf("Invalid");
        return;
    }
    int d=b*b*-4*a*c;
    double sqrt_val=sqrt(abs(d));

    if (d>0)
    {
        printf("Roots are real and different\n"); 
        printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a), 
               (double)(-b - sqrt_val) / (2 * a)); 
    }
    else if (d == 0) { 
        printf("Roots are real and same\n"); 
        printf("%f", -(double)b / (2 * a)); 
    } 
    else // d < 0 
    { 
        printf("Roots are complex\n"); 
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a), 
               sqrt_val / (2 * a), -(double)b / (2 * a), 
               sqrt_val / (2 * a)); 
    } 
    
}
int main() 
{ 
    int a = 1, b = -7, c = 12; 
  
    // Function call 
    roots(a, b, c); 
    return 0; 
}