//C Program to Find the Normal and Trace 
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    // Input the size of the square matrix
    printf("Enter the number of rows (and columns) for the square matrix: ");
    scanf("%d", &n);
    
    int matrix[n][n];
    int trace = 0;
    double norm = 0.0;
    
    // Input the elements of the matrix
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the trace and norm of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                trace += matrix[i][j]; 
            }
            norm += matrix[i][j] * matrix[i][j];  
    }
    
    norm = sqrt(norm);  
    // Output the results
    printf("Trace of the matrix: %d\n", trace);
    printf("Norm of the matrix (Frobenius norm): %.2f\n", norm);
    
    return 0;
}
