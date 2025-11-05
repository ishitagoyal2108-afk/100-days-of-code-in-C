#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int findPivotIndex(int* nums, int numsSize) {
    long long totalSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;
    for (int i = 0; i < numsSize; i++) {
        long long rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i; // Return the leftmost pivot index
        }
        leftSum += nums[i];
    }

    return -1; // No pivot index found
}

int main() {
    int numsSize;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);

    if (numsSize <= 0) {
        printf("-1\n");
        return 0;
    }

    int* nums = (int*)malloc(numsSize * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    int pivotIndex = findPivotIndex(nums, numsSize);
    printf("%d\n", pivotIndex);

    free(nums); // Free allocated memory
    return 0;
}
