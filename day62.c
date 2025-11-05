#include <stdio.h>
#include <limits.h> // Required for INT_MIN

// Function to find the maximum sum of a contiguous subarray using Kadane's algorithm
int maxSubarraySum(int arr[], int n) {
    int max_so_far = INT_MIN; // Stores the maximum sum found so far
    int current_max = 0;      // Stores the maximum sum ending at the current position
    int all_negative = 1;     // Flag to check if all elements are negative
    int largest_negative = INT_MIN; // Stores the largest negative element if all are negative

    for (int i = 0; i < n; i++) {
        // Update largest_negative if current element is larger and negative
        if (arr[i] > largest_negative && arr[i] < 0) {
            largest_negative = arr[i];
        }

        // Check if there's at least one non-negative element
        if (arr[i] >= 0) {
            all_negative = 0;
        }

        current_max += arr[i];

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }

        if (current_max < 0) {
            current_max = 0;
        }
    }

    // If all elements are negative, return the largest (least negative) element
    if (all_negative) {
        return largest_negative;
    }

    return max_so_far;
}

int main() {
    int arr[] = {-2, -3, -1, -5, -4}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int maxSum = maxSubarraySum(arr, n);
    printf("The maximum contiguous subarray sum is: %d\n", maxSum);

    int arr2[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Another example array
    n = sizeof(arr2) / sizeof(arr2[0]);
    maxSum = maxSubarraySum(arr2, n);
    printf("The maximum contiguous subarray sum is: %d\n", maxSum);

    return 0;
}
