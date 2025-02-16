//C Program to Calculate the Average of All the Elements Present in an Array 
#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    average = (float)sum / n;
    
    printf("Average = %.2f\n", average);
    
    return 0;
}
