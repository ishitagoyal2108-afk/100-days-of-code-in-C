#include <stdio.h>

void printKMax(int arr[], int n, int k) {
    int i, j;
    int current_max;

    // Iterate through the array to consider each possible starting point of a window
    for (i = 0; i <= n - k; i++) {
        current_max = arr[i]; // Initialize current_max with the first element of the current window

        // Iterate within the current window to find the maximum element
        for (j = 1; j < k; j++) {
            if (arr[i + j] > current_max) {
                current_max = arr[i + j];
            }
        }
        printf("%d ", current_max); // Print the maximum element for the current window
    }
    printf("\n"); // Print a newline character at the end for better formatting
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 3; // Define the size of the subarray (window)

    printf("Maximum elements in each window of size %d: ", k);
    printKMax(arr, n, k);

    int arr2[] = {10, 5, 2, 7, 8, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;

    printf("Maximum elements in each window of size %d: ", k2);
    printKMax(arr2, n2, k2);

    return 0;
}
