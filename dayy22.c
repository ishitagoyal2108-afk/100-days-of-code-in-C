//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1, denominator = 2;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;    // next odd number
        denominator += 2;  // next even number
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}