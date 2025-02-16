//C Program to Find the Largest Element in an Array using Pointers
#include <stdio.h>

int main() {
    int arr[] = {23, 45, 12, 78, 56, 89, 34};
    int *ptr = arr;
    int largest = *ptr;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    printf("The largest element is: %d\n", largest);

    return 0;
}
