//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
        numerator += 2;     // Next even number
        denominator += 4;   // Next odd number in sequence
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}