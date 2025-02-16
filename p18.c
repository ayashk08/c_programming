#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabate: ");
    scanf("%c",&ch);
    //char a,e,i,o,u,A,E,I,O,U;
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("vowel");
    }
    else
    printf("consonant");
    //printf("%c=%d",ch,ch);
return 0;
}