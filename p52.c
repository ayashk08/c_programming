//C Program to Check Prime Number By Creating a Function 
#include<stdio.h>

    int prime(int n){
        for (int  i = 2; i < n; i++)
        {
            if (n%i==0)
            {
                return 0;
            }
            
        }
        return 1;
        
    }
    int main(){
        int n;
        printf("enter number: ");
        scanf("%d",&n);
        if (prime(n))
        {
            printf("%d is prime  number",n);
        }
        else{
            printf("%d is not prime number",n);
        }
        return 0;
        

    }