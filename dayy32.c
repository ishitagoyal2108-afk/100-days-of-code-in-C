#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Handle negative numbers by converting to positive
    if (number < 0) {
        number = abs(number);
    }

    // Array to store the frequency of each digit (index 0 for digit 0, index 9 for digit 9)
    int digit_counts[10] = {0}; 

    // If the number is 0, the most frequent digit is 0
    if (number == 0) {
        printf("The most frequent digit is: 0\n");
        return 0;
    }

    // Extract digits and update their counts
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        digit_counts[digit]++;   // Increment the count for that digit
        number /= 10;            // Remove the last digit
    }

    // Find the digit with the maximum frequency
    int max_frequency = -1;
    int most_frequent_digit = -1;

    for (int i = 0; i < 10; i++) {
        if (digit_counts[i] > max_frequency) {
            max_frequency = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    printf("The most frequent digit is: %d\n", most_frequent_digit);

    return 0;
}
