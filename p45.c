//print hallow star
#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if (j==1||j==i||i==rows)
            {
                printf("* ");
            }
            else
                printf("  ");
            
        }
        printf("\n");
        
    }
    

return 0;
}