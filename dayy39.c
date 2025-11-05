#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    int size = 3; // Assuming a 3x3 matrix

    // Loop through the matrix to sum the main diagonal elements
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Add element at (i, i) to the sum
    }

    printf("Sum of main diagonal elements: %d\n", sum); // Output: 15 (1 + 5 + 9)

    return 0;
}
