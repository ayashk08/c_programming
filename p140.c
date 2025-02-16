//C Program to Rename a file
#include <stdio.h>

int main() {
    char oldFilename[100], newFilename[100];

    printf("Enter the current file name: ");
    scanf("%s", oldFilename);

    printf("Enter the new file name: ");
    scanf("%s", newFilename);

    if (rename(oldFilename, newFilename) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming the file.\n");
    }

    return 0;
}
