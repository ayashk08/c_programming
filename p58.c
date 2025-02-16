#include <stdio.h> 

long power(int x, unsigned n) 
{ 
    long long pow = 1; 

    for (int i = 0; i < n; i++) { 
        pow = pow * x; 
    } 
  
    return pow; 
} 
  
int main(void) 
{ 
  
    int x; 
    unsigned n; 
    printf("Enter number: ");
    scanf("%d%u",&x,&n);
  
    int result = power(x, n); 
    printf("%d", result); 
  
    return 0; 
}