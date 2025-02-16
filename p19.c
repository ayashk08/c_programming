#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum+=i;
    }
    printf("SUM OF NUMBER IS%d:",sum);
    
return 0;
}