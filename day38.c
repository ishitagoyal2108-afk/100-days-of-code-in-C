#include <stdio.h>

int main() {
    int r, c, a, b, sum, i, j;

    // 1. Get the dimensions of the matrices from the user
    printf("Enter the number of rows (1-100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (1-100): ");
    scanf("%d", &c);

    // 2. Input elements for the first matrix
    printf("\nEnter elements of Matrix 1:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Input elements for the second matrix
    printf("\nEnter elements of Matrix 2:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // 4. Add the two matrices and store the result in the sum matrix
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 5. Print the resulting sum matrix
    printf("\nSum of the two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j) {
            printf("%d ", sum[i][j]);
            if (j == c - 1) { // Print a newline after each row
                printf("\n\n");
            }
        }
    }

    return 0;
}
