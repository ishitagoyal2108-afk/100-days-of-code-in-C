#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using bool type

#define ALPHABET_SIZE 26 // For lowercase English alphabet

// Function to check if two strings are anagrams
bool areAnagrams(char *s, char *t) {
    int countS[ALPHABET_SIZE] = {0}; // Frequency array for string s
    int countT[ALPHABET_SIZE] = {0}; // Frequency array for string t
    int i;

    // Check if lengths are different; if so, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        return false;
    }

    // Count character frequencies in string s
    for (i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
    }

    // Count character frequencies in string t
    for (i = 0; t[i] != '\0'; i++) {
        countT[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (i = 0; i < ALPHABET_SIZE; i++) {
        if (countS[i] != countT[i]) {
            return false; // Frequencies do not match
        }
    }

    return true; // All frequencies match
}

int main() {
    char s[100]; // Assuming max string length of 99 characters
    char t[100];

    printf("Enter the first string (s): ");
    scanf("%s", s);

    printf("Enter the second string (t): ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
