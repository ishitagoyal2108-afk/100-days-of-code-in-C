#include <stdio.h>

// Function to find the ceil of x in a sorted array
int findCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ceilIndex = -1; // Initialize ceilIndex to -1 (no ceil found yet)

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate mid to prevent overflow

        if (arr[mid] >= x) {
            ceilIndex = mid; // Current element is a potential ceil
            high = mid - 1;  // Try to find a smaller ceil on the left
        } else {
            low = mid + 1; // Current element is smaller than x, search on the right
        }
    }
    return ceilIndex;
}

int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 8; // The integer for which to find the ceil

    int index = findCeil(arr, n, x);

    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The ceil of %d is at index %d (value: %d).\n", x, index, arr[index]);
    }

    // Test with another value where ceil doesn't exist
    x = 20;
    index = findCeil(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The ceil of %d is at index %d (value: %d).\n", x, index, arr[index]);
    }

    // Test with a value smaller than all elements
    x = 0;
    index = findCeil(arr, n, x);
    if (index == -1) {
        printf("Ceiling of %d does not exist in the array.\n", x);
    } else {
        printf("The ceil of %d is at index %d (value: %d).\n", x, index, arr[index]);
    }

    return 0;
}
