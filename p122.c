//C Program to Check if a String is a Palindrome using Pointers
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], *start, *end;
    printf("Enter a string: ");
    gets(str);
    
    start = str;
    end = str + strlen(str) - 1;
    
    while (start < end) {
        if (*start != *end) {
            printf("Not a palindrome\n");
            return 0;
        }
        start++;
        end--;
    }
    
    printf("Palindrome\n");
    return 0;
}
