#include<stdio.h>
int main()
{
int principal,time,rate;
float si;
printf("Enter principal: ");
scanf("%d",&principal);
printf("Enter time: ");
scanf("%d",&time);
printf("Enter principal: ");
scanf("%d",&rate);
si=(principal*time*rate)/100;
printf("SIMPLE INTEREST IS:%f",si);
return 0;
}