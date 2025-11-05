#include <stdio.h>

int main() {
    int rows, cols;

    // Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    long long sum = 0; // Use long long for sum to prevent overflow with large matrices

    // Get matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add the current element to the sum
        }
    }

    // Print the matrix (optional)
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the sum of all elements
    printf("\nSum of all elements in the matrix: %lld\n", sum);

    return 0;
}
