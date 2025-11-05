#include <stdio.h>
#include <stdlib.h> // For malloc and free if dynamic arrays are used

// Helper function to reverse a portion of an array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate an array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    if (n == 0 || k == 0) {
        return; // No rotation needed for empty array or k=0
    }

    k = k % n; // Handle k >= n

    // 1. Reverse the entire array
    reverse(arr, 0, n - 1);

    // 2. Reverse the first k elements
    reverse(arr, 0, k - 1);

    // 3. Reverse the remaining n-k elements
    reverse(arr, k, n - 1);
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original array: ");
    printArray(arr, n);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions: ", k);
    printArray(arr, n);

    int arr2[] = {10, 20, 30, 40};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    printf("\nOriginal array: ");
    printArray(arr2, n2);

    rotateRight(arr2, n2, k2);

    printf("Array after rotating right by %d positions: ", k2);
    printArray(arr2, n2);

    return 0;
}
