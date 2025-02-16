//C Program For Array Rotation 
#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n, d;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);
    
    rotateArray(arr, n, d);
    
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
