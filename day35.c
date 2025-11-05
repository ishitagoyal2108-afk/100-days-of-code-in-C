#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return INT_MIN; // Or handle error in a different way
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // The previous largest becomes the new second largest
            largest = arr[i];       // Current element is the new largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            // If current element is not the largest but is greater than secondLargest
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No distinct second largest element found (e.g., all elements are the same).\n");
    }
    return secondLargest;
}

int main() {
    int arr1[] = {12, 35, 1, 10, 34, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Second largest element in arr1: %d\n", findSecondLargest(arr1, n1));

    int arr2[] = {5, 5, 5, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Second largest element in arr2: %d\n", findSecondLargest(arr2, n2));

    int arr3[] = {10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Second largest element in arr3: %d\n", findSecondLargest(arr3, n3));

    return 0;
}
