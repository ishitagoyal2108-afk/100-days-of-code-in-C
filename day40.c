#include <stdio.h>
#include <stdbool.h>

void diagonalTraverse(int** matrix, int rows, int cols) {
    if (matrix == NULL || rows == 0 || cols == 0) {
        return;
    }

    int r = 0, c = 0;
    bool goingUp = true; // True for up-right, false for down-left

    for (int i = 0; i < rows * cols; i++) {
        printf("%d ", matrix[r][c]);

        if (goingUp) {
            if (r == 0 || c == cols - 1) { // Hit top row or rightmost column
                goingUp = false;
                if (c == cols - 1) { // Hit rightmost column, move down
                    r++;
                } else { // Hit top row, move right
                    c++;
                }
            } else { // Continue up-right
                r--;
                c++;
            }
        } else { // goingDown
            if (r == rows - 1 || c == 0) { // Hit bottom row or leftmost column
                goingUp = true;
                if (r == rows - 1) { // Hit bottom row, move right
                    c++;
                } else { // Hit leftmost column, move down
                    r++;
                }
            } else { // Continue down-left
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main() {
    int rows = 3;
    int cols = 3;

    // Dynamically allocate a 2D array
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Initialize the matrix
    int val = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = val++;
        }
    }

    printf("Matrix elements in diagonal order:\n");
    diagonalTraverse(matrix, rows, cols);

    // Free the dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
