#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    // Copy elements from arr1 to mergedArray
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    // Copy elements from arr2 to mergedArray
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
