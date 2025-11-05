#include <stdio.h>
#include <stdlib.h>

void findFirstNegativeInSubarrays(int arr[], int n, int k) {
    // Iterate through the array to consider each possible starting point of a subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; // Initialize to 0, indicating no negative found yet in the current window

        // Iterate within the current window of size k
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j]; // Found the first negative
                break; // No need to check further in this window
            }
        }
        printf("%d ", firstNegative); // Print the result for the current window
    }
    printf("\n"); // Print a newline at the end for clean output
}

int main() {
    int n, k;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Indicate an error
    }

    // Get array elements from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the subarray size k
    printf("Enter the subarray size (k): ");
    scanf("%d", &k);

    // Check for valid k
    if (k <= 0 || k > n) {
        printf("Invalid value of k. k must be between 1 and n.\n");
        free(arr); // Free allocated memory before exiting
        return 1;
    }

    // Call the function to find and print the first negative integers
    findFirstNegativeInSubarrays(arr, n, k);

    // Free the dynamically allocated memory
    free(arr);

    return 0; // Indicate successful execution
}
