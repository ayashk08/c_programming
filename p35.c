//check whether the input number is a neon number
#include<stdio.h>
int main()
{
    int num,sum=0,square,a;
    printf("Enter number is: ");
    scanf("%d",&num);
    square=num*num;
    while (square!=0)
    {
        a=square%10;
        sum=sum+a;
        square=square/10;
    }
    if (sum==num)
    {
        printf(" neon number");
    }
    else{
        printf(" not neon number");
    }
    
    
    
return 0;
}