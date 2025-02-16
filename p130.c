//Flexible Array Members in a Structure in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int num_grades;
    float grades[];
};

int main() {
    int num_grades = 3;
    struct Student *s;
    
    s = (struct Student *)malloc(sizeof(struct Student) + sizeof(float) * num_grades);
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return -1;
    }

    s->id = 101;
    strcpy(s->name, "John Doe");
    s->num_grades = num_grades;

    s->grades[0] = 85.5;
    s->grades[1] = 90.0;
    s->grades[2] = 88.5;

    printf("Student ID: %d\n", s->id);
    printf("Student Name: %s\n", s->name);
    printf("Grades: ");
    for (int i = 0; i < s->num_grades; i++) {
        printf("%.2f ", s->grades[i]);
    }
    printf("\n");

    free(s);

    return 0;
}
