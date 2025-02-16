//print 180 rotation of simple pyramid
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    for (int i = num; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
return 0;
}