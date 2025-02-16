//print pascal's pattern traingle
#include<stdio.h>
int main()
{
    int rows,i,j,space;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows-i-1; space++)
        {
            printf(" ");
        }
        int value=1;
        for ( int j = 0; j <= i; j++)
        {
            printf("%d ",value);
            value=value*(i-j)/(j+1);
        }
        printf("\n");
        
        
    }
    
return 0;
}