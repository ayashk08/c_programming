#include<stdio.h>
int main()
{
    int num1,num2,i,j,inter=1;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    printf("prime number between %d are %d are: ",num1,num2);

    for ( i = num1; i <=num2; i++)
    {
        if (i==1||i==0)
            continue;

            inter=1;
        
            for ( j = 2; j <= i/2; j++)
            {
                if (i%j==0)
                {
                    inter=0;
                    break;
                }
                
            }
            if (inter==1)
            {
                printf("%d,",i);
            }
            
            
    }
    
return 0;
}