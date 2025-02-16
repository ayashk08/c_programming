//programm to generate the first N fibonacci numbers
#include<stdio.h>
int main()
{
    int a,b,i,n;
    printf("Enter n  the number of fibonacci numbers:");
    scanf("%d",&n);
    a=0;b=1;i=2;
    while (i<n)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        a=a+b;
        b=a+b;
        i=i+2;

        

    }
    if(i==n)
    {
    printf("%d\n%d",a,b);
    }
    else
         printf("%d",a);
         return 0;

    

}
