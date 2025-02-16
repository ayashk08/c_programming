//C Program to Store Student Records as Structures and Sort them by Age or ID
#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
};

void sortByAge(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].age > students[j].age) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortByID(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].id > students[j].id) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void display(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
    }
}

int main() {
    int n, choice;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, and Age of student %d: ", i + 1);
        scanf("%d %s %d", &students[i].id, students[i].name, &students[i].age);
    }

    printf("Sort by:\n1. Age\n2. ID\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sortByAge(students, n);
    } else if (choice == 2) {
        sortByID(students, n);
    } else {
        printf("Invalid choice\n");
        return 0;
    }

    printf("Sorted student records:\n");
    display(students, n);

    return 0;
}
