//C Program to Compute the Sum of Diagonals of a Matrix 
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            primaryDiagonalSum += matrix[i][i];                
            secondaryDiagonalSum += matrix[i][cols - i - 1];    
        }
        
        printf("Sum of primary diagonal: %d\n", primaryDiagonalSum);
        printf("Sum of secondary diagonal: %d\n", secondaryDiagonalSum);
    } else {
        printf("Matrix is not square, so diagonals do not exist.\n");
    }

    return 0;
}
