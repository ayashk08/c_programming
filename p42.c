//print number pattern
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
       for ( int space  = 1; space <= num-i; space++)
       {
        printf(" ");
       }
       for (int j = 1; j <= 2*i-1; j++)
       {
        printf("%d ",j);
       }
       printf("\n");
       
       
        
        
    }
    
return 0;
}