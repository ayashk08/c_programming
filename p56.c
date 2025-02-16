//C Program to Find the Sum of Natural Numbers using Recursion
 #include<stdio.h>
 int sum(int n)
 {
    if (n<=1)
    {
        return n;
    }
    return n+sum(n-1);
 }
 int main()
 {
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("sum =%d",sum(num));
    return 0;
 }