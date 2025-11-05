#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate middle index

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Return the index if found
        }

        // If target is greater, ignore left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // If we reach here, the element was not present
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int target = 23; // Element to be searched

    int result = binarySearch(arr, n, target);

    if (result == -1) {
        printf("Element is not present in array\n");
    } else {
        printf("Element is present at index %d\n", result);
    }

    int target2 = 100; // Another element to search
    result = binarySearch(arr, n, target2);

    if (result == -1) {
        printf("Element %d is not present in array\n", target2);
    } else {
        printf("Element %d is present at index %d\n", target2, result);
    }

    return 0;
}
