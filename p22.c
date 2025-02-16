#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        fact*=i;
    }
    printf("FACTORIAL NUMBER IS :%d",fact);
    
return 0;
}