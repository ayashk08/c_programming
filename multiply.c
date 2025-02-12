// C program to multiply two 
// floating point numbers 
#include <stdio.h> 

float multiply(float a, float b)  
{  
  return a * b;  
} 
int main() 
{ 
    float A = 5.0, B = 3.0, product; 
    product = multiply(A, B);  
    printf("Product of entered numbers is:%.3f", product); 
  
    return 0; 
}


