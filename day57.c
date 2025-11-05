#include <stdio.h>
#include <stdlib.h> // Required for malloc

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the next greater element for each element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Initialize next greater element to -1

        // Iterate through the elements to the right of the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Found the next greater element, so break the inner loop
            }
        }

        // Print the result for the current element
        printf("%d", nextGreater);

        // Print a comma if it's not the last element
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
