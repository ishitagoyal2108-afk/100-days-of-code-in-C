#include <stdio.h>
#include <string.h> // For strlen()

// Function to check if two strings are anagrams
int areAnagrams(char *s1, char *s2) {
    // If lengths are different, they cannot be anagrams
    if (strlen(s1) != strlen(s2)) {
        return 0; // Not anagrams
    }

    // Create frequency arrays for characters (assuming ASCII characters)
    int count1[256] = {0}; // Initialize all counts to 0
    int count2[256] = {0};

    // Count character frequencies in the first string
    for (int i = 0; s1[i] != '\0'; i++) {
        count1[(int)s1[i]]++;
    }

    // Count character frequencies in the second string
    for (int i = 0; s2[i] != '\0'; i++) {
        count2[(int)s2[i]]++;
    }

    // Compare the frequency arrays
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0; // Frequencies don't match, not anagrams
        }
    }

    return 1; // All frequencies match, they are anagrams
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    char str3[] = "hello";
    char str4[] = "world";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    if (areAnagrams(str3, str4)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str3, str4);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str3, str4);
    }

    return 0;
}
