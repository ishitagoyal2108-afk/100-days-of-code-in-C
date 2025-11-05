#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

// Function to find two indices that sum to the target
void findTwoSum(int* nums, int size, int target) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Start j from i + 1 to ensure distinct indices
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return; // Exactly one solution exists, so we can return early
            }
        }
    }
    // If no solution is found (though the problem states one always exists),
    // this part would be reached.
    printf("-1 -1\n"); 
}

int main() {
    int size;
    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int* nums = (int*)malloc(size * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read the elements of the array
    printf("Enter the positive integers for the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int target;
    // Read the target value
    printf("Enter the target sum: ");
    scanf("%d", &target);

    // Call the function to find and print the indices
    findTwoSum(nums, size, target);

    // Free the dynamically allocated memory
    free(nums);
    nums = NULL; // Prevent dangling pointer

    return 0;
}
