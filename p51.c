//C Program to Print Reverse Floyd pattern Triangle Pyramid
#include<stdio.h>
int main()
{
    int num ,c=num*(num+1)/2;
    printf("Enter number of rows: ");
    scanf("%d",&num);
    for (int i = num; i >= 1; i--) {

        for (int j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }
    
return 0;
}