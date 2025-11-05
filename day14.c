//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // First n odd numbers are: 1, 3, 5, 7, ...
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1);  // odd number formula
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}