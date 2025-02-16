#include<stdio.h>
int main(){
    int num,k=0,i=1;
    printf("Enter number: ");
    scanf("%d",&num);
    while (num>=i)
    {
        if (num%i==0)
        {
            k+=1;
            i++;
        }
        
    }
    if (k==2)
    {
        printf("prime");
    }
    else{
         printf("not prime");
    }

    return 0;
    

}