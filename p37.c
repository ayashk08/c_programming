//sum of fibonacci number at even indexes upto n terms
#include<stdio.h>
int main()
{
    int num,a=0,b=1,c,i,sum=0;
    c=a+b;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("The fibonacci series is %d,%d,",a,b);
    for (int i = 2; i <=num; ++i)
    {
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    if (i%2==0)
    {
        sum+=i;
    }
    printf("sum is%d\n",sum);
    
    
return 0;
}