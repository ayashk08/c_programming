//C Program to Sort a 2D Array of Strings
#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char arr[5][50] = {
        "Banana", 
        "Apple", 
        "Orange", 
        "Mango", 
        "Pineapple"
    };
    int n = 5;

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    sortStrings(arr, n);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
