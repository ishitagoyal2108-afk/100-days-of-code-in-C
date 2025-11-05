//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;   // use long long for large results

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}