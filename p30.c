//reverse number
#include<stdio.h>
int main()
{
    int num,rev=0,temp,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        rev=num%10;
        sum=sum*10+rev;
        num=num/10;
    
    }
    printf("REVERSE NUMBER IS:%d",sum);
    

return 0;
}