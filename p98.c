//C Program to Determine the Unicode Code Point at a Given Index 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int index;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the index: ");
    scanf("%d", &index);
    
    int length = strlen(str);
    
    if (index < 0 || index >= length) {
        printf("Index is out of bounds.\n");
    } else {
        printf("The Unicode code point at index %d is: %d\n", index, str[index]);
    }
    
    return 0;
}
