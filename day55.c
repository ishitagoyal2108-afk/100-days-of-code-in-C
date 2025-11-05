#include <stdio.h>

// Function to find the majority element
int findMajorityElement(int nums[], int n) {
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a potential candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    } else {
        return -1; // No majority element found
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int nums[n]; // Declare array of size n

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majorityElement = findMajorityElement(nums, n);

    if (majorityElement != -1) {
        printf("The majority element is: %d\n", majorityElement);
    } else {
        printf("-1 (No majority element exists)\n");
    }

    return 0;
}
