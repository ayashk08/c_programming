//C Program to Find the Determinant of a Matrix
#include <stdio.h>

int determinant(int matrix[3][3], int n) {
    int det = 0;
    if (n == 1) {
        return matrix[0][0];
    }
    
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    int temp[3][3];
    int sign = 1;

    for (int f = 0; f < n; f++) {
        int sub_i = 0;
        for (int i = 1; i < n; i++) {
            int sub_j = 0;
            for (int j = 0; j < n; j++) {
                if (j == f) continue;
                temp[sub_i][sub_j] = matrix[i][j];
                sub_j++;
            }
            sub_i++;
        }
        det += sign * matrix[0][f] * determinant(temp, n - 1);
        sign = -sign;
    }

    return det;
}

int main() {
    int n = 3;
    int matrix[3][3];
    
    printf("Enter the elements of the 3x3 matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int det = determinant(matrix, n);
    
    printf("Determinant of the matrix is: %d\n", det);
    
    return 0;
}
