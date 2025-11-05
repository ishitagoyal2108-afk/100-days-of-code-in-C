#include <stdio.h>
#include <stdlib.h> // Required for qsort

// Comparison function for qsort
int compareIntegers(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {12, 3, 5, 7, 19, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Find the 3rd smallest element

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), compareIntegers);

    // The k-th smallest element will be at index k-1 after sorting
    if (k > 0 && k <= n) {
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    } else {
        printf("Invalid value of k.\n");
    }

    return 0;
}
