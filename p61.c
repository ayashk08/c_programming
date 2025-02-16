//C Program to Find the Maximum and Minimum in an Array
#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

   
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}
