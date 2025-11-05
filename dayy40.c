#include <stdio.h>

int main() {
    int r1, c1, r2, c2; // Dimensions of the matrices
    int m1[10][10], m2[10][10], m3[10][10]; // Matrices and result

    // Get dimensions for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Get dimensions for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if matrices can be multiplied
    if (c1 != r2) {
        printf("Matrix multiplication is not possible.\n");
        return 0; // Exit the program if multiplication is not possible
    }

    // Get elements of the first matrix from the user
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    // Get elements of the second matrix from the user
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            m3[i][j] = 0; // Initialize the element with zero
            // Multiply the i-th row of m1 with the j-th column of m2
            for (int k = 0; k < c1; k++) {
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    // Print the resultant matrix
    printf("\nResultant matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
