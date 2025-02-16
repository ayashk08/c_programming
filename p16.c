#include<stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("positive");
    }
    else if (num==0)
    {
        printf("zero");
    }
    else
    printf("negative");
    
    
    
return 0;
}