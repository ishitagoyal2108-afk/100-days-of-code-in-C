//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped, middle;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;                       // Get last digit
    digits = (int)log10(num);              // Count total digits - 1
    first = num / (int)pow(10, digits);    // Get first digit

    middle = num % (int)pow(10, digits);   // Remove first digit
    middle = middle / 10;                  // Remove last digit

    // Reconstruct number after swapping
    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}