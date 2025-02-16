#include<stdio.h>
int main()
{
    char ch,result;
    int a,b;
    printf("Enter a operator: ");
    scanf("%c",&ch);
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    switch (ch)
    {
    case '+':
        result=a+b;
        printf("addition: %d",result);
        break;

    case '-':
        result=a-b;
        printf("substraction: %d",result);
        break;

        case '*':
        result=a*b;
        printf("multiply: %d",result);
        break;

        case '/':
        result=a/b;
        printf("division: %d",result);
        break;
    
    default:
    printf("invalid operator");
        break;
    }
return 0;
}