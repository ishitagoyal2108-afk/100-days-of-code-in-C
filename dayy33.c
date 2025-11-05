#include <stdio.h>

// Function to insert an element into a sorted array
void insertSorted(int arr[], int *n, int value, int capacity) {
    if (*n >= capacity) {
        printf("Error: Array is full. Cannot insert more elements.\n");
        return;
    }

    int i = *n - 1;

    // Find the position to insert and shift elements
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the value
    arr[i + 1] = value;
    (*n)++; // Increment the size of the array
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; // Initial sorted array
    int n = 5; // Current number of elements
    int capacity = 10; // Maximum capacity of the array

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int valueToInsert = 25;
    insertSorted(arr, &n, valueToInsert, capacity);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    valueToInsert = 5;
    insertSorted(arr, &n, valueToInsert, capacity);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    valueToInsert = 60;
    insertSorted(arr, &n, valueToInsert, capacity);

    printf("Array after inserting %d: ", valueToInsert);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
