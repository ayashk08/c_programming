//C program to Reverse a String Using Recursion
#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    reverseString(str, 0, length - 1);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
