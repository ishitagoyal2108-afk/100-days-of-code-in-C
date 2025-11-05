#include <stdio.h>

// Function to insert an element at a specific position
void insertElement(int arr[], int *size, int element, int position) {
    // Validate the position
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right to make space
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position] = element;

    // Increment the size of the array
    (*size)++;
}

int main() {
    int arr[100]; // Declare an array with a maximum capacity of 100
    int size = 5; // Current number of elements in the array

    // Initialize the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int elementToInsert = 25;
    int insertPosition = 2; // Insert at index 2 (third position)

    insertElement(arr, &size, elementToInsert, insertPosition);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

