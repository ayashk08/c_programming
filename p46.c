//inverted hallow star print
#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0;  j<rows-1 ; j++)
        {
            if (j==0||j==rows-i-1||i==0)
            {
                printf("* ");
            }
            else    
                printf(" ");
            
        }
        printf("\n");
        
    }
    
return 0;
}