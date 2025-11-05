//Write a program to find the product of odd digits of a number.
#include <stdio.h>
void main() {
    int num, product = 1, odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { 
            product *= digit;
            odd = 1; 
        }
        num /= 10;
    }

    if (!odd) {
        product = 1;
    }

    printf("Product of odd digits is: %d\n", product);
}