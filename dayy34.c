#include <stdio.h>

int main() {
    int arr[100]; // Declare an array with a maximum size
    int size, position, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0-indexed) of the element to delete: ");
    scanf("%d", &position);

    // Validate the position
    if (position < 0 || position >= size) {
        printf("Invalid position for deletion.\n");
    } else {
        // Shift elements to the left
        for (i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // Decrement the logical size

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
