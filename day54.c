#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int pivot_x = -1;

    for (int x = 1; x <= n; x++) {
        // Calculate sum from 1 to x
        long long sum_1_to_x = (long long)x * (x + 1) / 2;

        // Calculate sum from x to n
        // Sum from x to n = (Sum from 1 to n) - (Sum from 1 to x-1)
        long long sum_1_to_n = (long long)n * (n + 1) / 2;
        long long sum_1_to_x_minus_1 = (long long)(x - 1) * x / 2;
        long long sum_x_to_n = sum_1_to_n - sum_1_to_x_minus_1;

        if (sum_1_to_x == sum_x_to_n) {
            pivot_x = x;
            break; // Guaranteed at most one pivot integer
        }
    }

    printf("%d\n", pivot_x);

    return 0;
}
