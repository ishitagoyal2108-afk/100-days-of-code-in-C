#include <stdio.h>
#include <limits.h> // For INT_MIN

// Function to find the maximum sum of subarrays of size k
int maxSubarraySum(int arr[], int n, int k) {
    // Handle invalid input cases
    if (n < k || k <= 0) {
        printf("Invalid input: Array size must be greater than or equal to k, and k must be positive.\n");
        return INT_MIN; // Return a very small number to indicate error
    }

    int current_window_sum = 0;
    int max_sum = INT_MIN;

    // Calculate the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        current_window_sum += arr[i];
    }

    // Initialize max_sum with the sum of the first window
    max_sum = current_window_sum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        // Remove the element going out of the window and add the new element
        current_window_sum = current_window_sum - arr[i - k] + arr[i];

        // Update max_sum if the current window sum is greater
        if (current_window_sum > max_sum) {
            max_sum = current_window_sum;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxSubarraySum(arr, n, k);

    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k, result);
    }

    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;
    result = maxSubarraySum(arr2, n2, k2);
    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k2, result);
    }

    int arr3[] = {10, -5, 20, 15, -10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 4;
    result = maxSubarraySum(arr3, n3, k3);
    if (result != INT_MIN) {
        printf("The maximum sum of a subarray of size %d is: %d\n", k3, result);
    }

    return 0;
}
