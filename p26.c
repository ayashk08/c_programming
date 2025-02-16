//find lcm of two numbers
#include<stdio.h>
int main()
{
    int num,num1,max,lcm;
    printf("Enter 1st number: ");
    scanf("%d",&num);
    printf("Enter 2nd number: ");
    scanf("%d",&num1);
    max=(num>num1)? num:num1;
    lcm=max;
    while (lcm%num!=0||lcm%num1!=0)
    {
        lcm+=max;
    }
    printf("The lcm of %d and %d is %d",num,num1,lcm);
    

return 0;
}