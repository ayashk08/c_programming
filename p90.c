//C Program to Get a Non-Repeating Character From the Given String
#include <stdio.h>
#include <string.h>

char getNonRepeatingChar(char str[]) {
    int count[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }
    return '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char result = getNonRepeatingChar(str);
    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }
    return 0;
}
