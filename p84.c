//C Program to Rotate Matrix Elements 
#include <stdio.h>

int main() {
    int rows, cols, i, j, temp;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows / 2; i++) {
        for (j = i; j < cols - i - 1; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[rows - 1 - i][j];
            matrix[rows - 1 - i][j] = matrix[rows - 1 - i][cols - 1 - j];
            matrix[rows - 1 - i][cols - 1 - j] = matrix[i][cols - 1 - j];
            matrix[i][cols - 1 - j] = temp;
        }
    }

    printf("Matrix after rotation: \n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}