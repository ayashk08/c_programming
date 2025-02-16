//C Program to Read/Write Structure to a File
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void writeToFile(const char *filename, struct Student *s) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(s, sizeof(struct Student), 1, file);
    fclose(file);
}

void readFromFile(const char *filename, struct Student *s) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    fread(s, sizeof(struct Student), 1, file);
    fclose(file);
}

int main() {
    struct Student s1 = {1, "John Doe", 85.5};
    const char *filename = "student.dat";
    
    writeToFile(filename, &s1);
    printf("Student record written to file.\n");

    struct Student s2;
    
    readFromFile(filename, &s2);
    printf("Student record read from file:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Grade: %.2f\n", s2.grade);

    return 0;
}
