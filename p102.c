//C Program to Insert a String into Another String
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000


void insertString(char *str1, const char *str2, int position) {
    int len1 = strlen(str1);
    int len2 = strlen(str2); 


    for (int i = len1; i >= position; i--) {
        str1[i + len2] = str1[i];
    }

    
    for (int i = 0; i < len2; i++) {
        str1[position + i] = str2[i];
    }
    str1[len1 + len2] = '\0'; 
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    int position;

    
    printf("Enter the first string (target string): ");
    fgets(str1, MAX_LENGTH, stdin);
    str1[strlen(str1) - 1] = '\0'; 

    
    printf("Enter the second string (string to insert): ");
    fgets(str2, MAX_LENGTH, stdin);
    str2[strlen(str2) - 1] = '\0'; 
   
    printf("Enter the position to insert the second string: ");
    scanf("%d", &position);

   
    insertString(str1, str2, position);

   
    printf("Resulting string after insertion: %s\n", str1);

    return 0;
}
