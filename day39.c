#include <stdbool.h>

// Function to check if diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[][N], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Found a duplicate
            }
        }
    }
    return true; // All diagonal elements are distinct
}

// Example usage:
// int N = 3;
// int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// if (areDiagonalElementsDistinct(matrix, N)) {
//     printf("Diagonal elements are distinct.\n");
// } else {
//     printf("Diagonal elements are not distinct.\n");
// }
