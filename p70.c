//C Program to Remove Duplicate Elements From a Sorted Array
#include <stdio.h>

int main() {
    int n, k = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the sorted elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i <= k; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
