//check armstrong number
#include<stdio.h>
int main()
{
    int num,rev=0,sum=0,temp;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        rev=num%10;
        sum=sum+(rev*rev*rev);
        num=num/10;
    }
    if (temp==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("not armstrong");
    }
    
return 0;
}