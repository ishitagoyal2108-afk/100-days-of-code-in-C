#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using boolean type

// Function to find the first repeating lowercase alphabet
char findFirstRepeatingLowercase(const char* str) {
    // Array to store the frequency of each lowercase alphabet (a-z)
    // Initialize all counts to 0
    int char_counts[26] = {0}; 

    // Iterate through the string to count character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a lowercase alphabet
        if (ch >= 'a' && ch <= 'z') {
            char_counts[ch - 'a']++; // Increment count for the corresponding alphabet
        }
    }

    // Iterate through the string again to find the first character with a count > 1
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (char_counts[ch - 'a'] > 1) {
                return ch; // Return the first repeating lowercase alphabet found
            }
        }
    }

    return '\0'; // Return null character if no repeating lowercase alphabet is found
}

int main() {
    const char* test_string1 = "programming";
    const char* test_string2 = "abcdefg";
    const char* test_string3 = "hello world";
    const char* test_string4 = "apple";
    const char* test_string5 = "aabcdeff";

    char result1 = findFirstRepeatingLowercase(test_string1);
    if (result1 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", test_string1, result1);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", test_string1);
    }

    char result2 = findFirstRepeatingLowercase(test_string2);
    if (result2 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", test_string2, result2);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", test_string2);
    }

    char result3 = findFirstRepeatingLowercase(test_string3);
    if (result3 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", test_string3, result3);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", test_string3);
    }

    char result4 = findFirstRepeatingLowercase(test_string4);
    if (result4 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", test_string4, result4);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", test_string4);
    }

    char result5 = findFirstRepeatingLowercase(test_string5);
    if (result5 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", test_string5, result5);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", test_string5);
    }

    return 0;
}
