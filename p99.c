//C Program to Remove Leading Zeros 
#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int i = 0;
    while (str[i] == '0' && str[i] != '\0') {
        i++;
    }
    
    if (i == 0) {
        printf("%s\n", str);
    } else {
        printf("%s\n", &str[i]);
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    removeLeadingZeros(str);
    
    return 0;
}
