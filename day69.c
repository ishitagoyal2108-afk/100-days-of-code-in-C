#include <stdio.h>

int findRepeatedElement(int arr[], int n) {
    int xorSum = 0;
    int i;

    // XOR all elements in the array
    for (i = 0; i < n; i++) {
        xorSum ^= arr[i];
    }

    // XOR with numbers from 1 to n-1 (assuming elements are within this range)
    // If the array contains elements outside this range, this approach might need modification
    for (i = 1; i <= n - 1; i++) {
        xorSum ^= i;
    }

    return xorSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2}; // Example array with 2 repeated
    int n = sizeof(arr) / sizeof(arr[0]);

    int repeatedElement = findRepeatedElement(arr, n);
    printf("The repeated element is: %d\n", repeatedElement);

    int arr2[] = {1, 5, 2, 3, 4, 5}; // Another example with 5 repeated
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int repeatedElement2 = findRepeatedElement(arr2, n2);
    printf("The repeated element is: %d\n", repeatedElement2);

    return 0;
}
