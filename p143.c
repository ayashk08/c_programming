//C Program to Append the Content of One Text File to Another
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], destinationFile[100];
    FILE *src, *dest;
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    dest = fopen(destinationFile, "a");
    if (dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("Content successfully appended from %s to %s.\n", sourceFile, destinationFile);

    fclose(src);
    fclose(dest);

    return 0;
}
