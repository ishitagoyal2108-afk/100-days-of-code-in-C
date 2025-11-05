#include <stdio.h>

// Function to find the first occurrence of the target
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int firstOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            firstOccurrence = mid;
            high = mid - 1; // Search in the left half for an earlier occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstOccurrence;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int lastOccurrence = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            lastOccurrence = mid;
            low = mid + 1; // Search in the right half for a later occurrence
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastOccurrence;
}

int main() {
    int nums[] = {1, 2, 4, 6, 8, 8, 8, 8, 9, 10, 11};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 8;

    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d: %d\n", target, first);
    printf("Last occurrence of %d: %d\n", target, last);

    // Example with target not present
    target = 5;
    first = findFirstOccurrence(nums, size, target);
    last = findLastOccurrence(nums, size, target);

    printf("First occurrence of %d: %d\n", target, first);
    printf("Last occurrence of %d: %d\n", target, last);

    return 0;
}
