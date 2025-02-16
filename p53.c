//C Program to Display Prime Numbers Between Two Intervals Using Functions 
#include<stdio.h>
int checkPrimeNumber(int n){
    int i,f=1;
    for ( i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
            f=0;
            break;
        }
        
    }
    return f;
    
}
int main(){
    int num,num1,j,f;
    printf("Enter number:");
    scanf("%d",&num);
    printf("enter number:");
    scanf("%d",&num1);
    printf("Prime number between %d and %d are:",num,num1);
    for ( j = num; j < num1; j++)
    {
        f=checkPrimeNumber(j);
        if (f==1)
        {
            printf("%d ",j);
        }
        
    }
    return 0;
}