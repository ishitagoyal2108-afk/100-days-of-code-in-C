#include <stdio.h>
#include <stdlib.h> // For malloc

// Function to calculate the product array
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize; // The answer array will have the same size as nums

    // Allocate memory for the answer array
    int* answer = (int*)malloc(sizeof(int) * numsSize);
    if (answer == NULL) {
        // Handle memory allocation failure
        return NULL;
    }

    // Calculate prefix products
    // answer[i] will store the product of elements to the left of nums[i]
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Calculate suffix products and combine with prefix products
    // 'right_product' will store the product of elements to the right of nums[i]
    int right_product = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= right_product; // Multiply prefix product with suffix product
        right_product *= nums[i];   // Update right_product for the next iteration
    }

    return answer;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    int* answer1 = productExceptSelf(nums1, numsSize1, &returnSize1);

    printf("Input: [");
    for (int i = 0; i < numsSize1; i++) {
        printf("%d%s", nums1[i], (i == numsSize1 - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d%s", answer1[i], (i == returnSize1 - 1) ? "" : ", ");
    }
    printf("]\n\n");
    free(answer1); // Free allocated memory

    int nums2[] = {-1, 1, 0, -3, 3};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    int* answer2 = productExceptSelf(nums2, numsSize2, &returnSize2);

    printf("Input: [");
    for (int i = 0; i < numsSize2; i++) {
        printf("%d%s", nums2[i], (i == numsSize2 - 1) ? "" : ", ");
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d%s", answer2[i], (i == returnSize2 - 1) ? "" : ", ");
    }
    printf("]\n");
    free(answer2); // Free allocated memory

    return 0;
}
