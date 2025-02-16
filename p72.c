//C Program to Remove All Occurrences of an Element in an Array 
#include <stdio.h>

int main() {
    int n, element, k = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to remove: ");
    scanf("%d", &element);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != element) {
            arr[k++] = arr[i];
        }
    }
    
    printf("Array after removing all occurrences of %d: ", element);
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
