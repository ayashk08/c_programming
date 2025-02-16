//C Program to Create a Copy of a Singly Linked List using Recursion
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createCopy(struct Node* original) {
    if (original == NULL) {
        return NULL;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = original->data;
    newNode->next = createCopy(original->next);
    return newNode;
}

void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    struct Node* originalList = NULL;
    struct Node* copiedList = NULL;

    insert(&originalList, 10);
    insert(&originalList, 20);
    insert(&originalList, 30);
    insert(&originalList, 40);

    printf("Original List: ");
    printList(originalList);

    copiedList = createCopy(originalList);

    printf("Copied List: ");
    printList(copiedList);

    return 0;
}
