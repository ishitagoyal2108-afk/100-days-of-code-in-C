#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int originalMatrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};
    int transposedMatrix[COLS][ROWS]; // Dimensions are swapped

    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", originalMatrix[i][j]);
        }
        printf("\n");
    }

    // Perform transpose
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposedMatrix[j][i] = originalMatrix[i][j];
        }
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < COLS; i++) { // Iterate through new rows (original columns)
        for (int j = 0; j < ROWS; j++) { // Iterate through new columns (original rows)
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
