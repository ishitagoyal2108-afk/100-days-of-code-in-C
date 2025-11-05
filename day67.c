#include <stdio.h>
#include <stdlib.h> // For malloc

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int mergedArr[]) {
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for mergedArr

    // Traverse both arrays and add the smaller element to mergedArr
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Add remaining elements of arr1, if any
    while (i < m) {
        mergedArr[k++] = arr1[i++];
    }

    // Add remaining elements of arr2, if any
    while (j < n) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int m, n;

    printf("Enter the size of the first array (m): ");
    scanf("%d", &m);

    int *arr1 = (int *)malloc(m * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed for arr1.\n");
        return 1;
    }
    printf("Enter %d sorted elements for the first array:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array (n): ");
    scanf("%d", &n);

    int *arr2 = (int *)malloc(n * sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed for arr2.\n");
        free(arr1); // Free previously allocated memory
        return 1;
    }
    printf("Enter %d sorted elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int *mergedArr = (int *)malloc((m + n) * sizeof(int));
    if (mergedArr == NULL) {
        printf("Memory allocation failed for mergedArr.\n");
        free(arr1);
        free(arr2);
        return 1;
    }

    mergeSortedArrays(arr1, m, arr2, n, mergedArr);

    printf("\nMerged and sorted array: ");
    for (int i = 0; i < (m + n); i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    free(arr1);
    free(arr2);
    free(mergedArr);

    return 0;
}
