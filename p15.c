#include<stdio.h>
int main()
{
int length,breadth,area,perimiter;
printf("Enter length: ");
scanf("%d",&length);
printf("Enter breadth: ");
scanf("%d",&breadth);
area=length*breadth;
perimiter=2*(length+breadth);
printf("area of rectangle:%d\n",area);
printf("perimeter of rectangle is:%d",perimiter);
return 0;
}