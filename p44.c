//continous character pattern
#include<stdio.h>
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for (int i = 0; i <rows; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    
return 0;
}