//printf floyd's patter triangle pyramid
#include<stdio.h>
int main()
{
    int num ,c=1;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%d",c++);

        }
        printf("\n");
        
    }
    
return 0;
}