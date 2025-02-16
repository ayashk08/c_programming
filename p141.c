//C Program to Read and Print all Files From a Zip File 
#include <stdio.h>
#include <stdlib.h>
#include <zip.h>

void printFileContents(zip_t *zip, const char *filename) {
    struct zip_file *zfile;
    char buffer[1024];
    int bytesRead;

    zfile = zip_fopen(zip, filename, 0);
    if (zfile == NULL) {
        fprintf(stderr, "Error opening file %s in zip archive\n", filename);
        return;
    }

    printf("Contents of %s:\n", filename);
    while ((bytesRead = zip_fread(zfile, buffer, sizeof(buffer))) > 0) {
        fwrite(buffer, 1, bytesRead, stdout);
    }

    printf("\n\n");

    zip_fclose(zfile);
}

int main() {
    const char *zip_filename = "example.zip";  // Path to the ZIP file
    int err = 0;
    zip_t *zip = zip_open(zip_filename, 0, &err);

    if (zip == NULL) {
        fprintf(stderr, "Error opening ZIP file %s\n", zip_filename);
        return 1;
    }

    int numFiles = zip_get_num_entries(zip, 0);
    if (numFiles < 0) {
        fprintf(stderr, "Error reading number of entries in ZIP file\n");
        zip_close(zip);
        return 1;
    }

    printf("Number of files in the ZIP archive: %d\n", numFiles);

    for (int i = 0; i < numFiles; i++) {
        const char *filename = zip_get_name(zip, i, 0);
        if (filename == NULL) {
            fprintf(stderr, "Error reading file name from ZIP archive\n");
            continue;
        }

        printFileContents(zip, filename);
    }

    zip_close(zip);

    return 0;
}
