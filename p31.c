//CHECK PALLINDROME OR  NOT
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
    if (temp==sum)
    {
        printf("PALLINDROME");
    }
    else{
    printf("NOT PALLINDROME");
    }
    

return 0;
}