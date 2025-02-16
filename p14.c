#include<stdio.h>
#include<math.h>
int main()
{
double p,t,r;
double ci,amount;
printf("Enter principal: ");
scanf("%lf",&p);
printf("Enter time: ");
scanf("%lf",&t);
printf("Enter rate of interest: ");
scanf("%lf",&r);
amount=p*((pow((1+r/100),t)));
ci=amount-p;
printf("compound interest is:%lf",ci);
return 0;
}