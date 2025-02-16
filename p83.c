//C Program to Print Boundary Elements of a Matrix 
#include <stdio.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Boundary elements of the matrix are: \n");
    
    
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[0][j]);
    }
    
  
    for (int i = 1; i < rows; i++) {
        printf("%d ", matrix[i][cols-1]);
    }
    

    if (rows > 1) {
        for (int j = cols - 2; j >= 0; j--) {
            printf("%d ", matrix[rows-1][j]);
        }
    }
    
    
    if (cols > 1) {
        for (int i = rows - 2; i > 0; i--) {
            printf("%d ", matrix[i][0]);
        }
    }
    
    printf("\n");
    
    return 0;
}
