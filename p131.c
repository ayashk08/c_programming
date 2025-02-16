//C Program to Create a Temporary File
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tempFile;

    tempFile = tmpfile();
    if (tempFile == NULL) {
        printf("Failed to create temporary file.\n");
        return 1;
    }

    fprintf(tempFile, "This is a temporary file.\n");
    fprintf(tempFile, "It will be automatically deleted when closed.\n");

    rewind(tempFile);

    char ch;
    printf("Reading from the temporary file:\n");
    while ((ch = fgetc(tempFile)) != EOF) {
        putchar(ch);
    }

    fclose(tempFile);

    return 0;
}
