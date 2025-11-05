#include <stdio.h>

int main() {
    int n, i;

    // Get the size of the array (which is also 'n' for the range 0 to n)
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    // Declare an array of size 'n' to store the input numbers
    int arr[n];

    // Get the array elements from the user
    printf("Enter the %d elements of the array (integers from 0 to %d, one missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the expected sum of numbers from 0 to n
    // The formula for the sum of an arithmetic series is n * (first + last) / 2
    // Here, the series is 0, 1, 2, ..., n. So, first = 0, last = n.
    // The sum of numbers from 0 to n is n * (n + 1) / 2.
    long long expected_sum = (long long)n * (n + 1) / 2;

    // Calculate the actual sum of elements in the input array
    long long actual_sum = 0;
    for (i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    int missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
