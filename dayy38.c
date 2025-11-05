#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // A symmetric matrix must be a square matrix
    if (rows != cols) {
        printf("The matrix is not square, therefore it cannot be symmetric.\n");
        exit(0);
    }

    int matrix[rows][cols]; // Declare the matrix
    int i, j;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry by comparing matrix[i][j] with matrix[j][i]
    int isSymmetric = 1; // Assume symmetric initially
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break; // Exit inner loop
            }
        }
        if (!isSymmetric) {
            break; // Exit outer loop
        }
    }

    if (isSymmetric) {
        printf("\nThe given matrix is symmetric.\n");
    } else {
        printf("\nThe given matrix is not symmetric.\n");
    }

    return 0;
}
