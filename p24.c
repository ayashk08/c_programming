#include<stdio.h>
int main()
{
    int num,multi;
    printf("Enter number:");
    scanf("%d",&num);
    for (int i = 1; i <=10 ; i++)
    {
        multi=num*i;
    printf("%d * %d =%d",num,i,multi);
    printf("\n");
    }
    
return 0;
}