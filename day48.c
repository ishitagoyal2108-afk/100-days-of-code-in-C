#include <stdio.h>
#include <string.h>
#include <stdlib.h> // For malloc and free

// Function to check if s2 is a rotation of s1
int areRotations(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If lengths are different, they cannot be rotations of each other
    if (len1 != len2) {
        return 0; // False
    }

    // Allocate memory for the concatenated string (s1 + s1)
    // Needs space for 2 * len1 characters + 1 for null terminator
    char *temp = (char *)malloc(sizeof(char) * (2 * len1 + 1));
    if (temp == NULL) {
        perror("Memory allocation failed");
        return -1; // Indicate error
    }

    // Concatenate s1 with itself
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    // strstr returns a pointer to the first occurrence of s2 in temp, or NULL if not found
    if (strstr(temp, s2) != NULL) {
        free(temp); // Free allocated memory
        return 1; // True
    } else {
        free(temp); // Free allocated memory
        return 0; // False
    }
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";
    char str3[] = "ACBD";

    if (areRotations(str1, str2)) {
        printf("\"%s\" and \"%s\" are rotations of each other.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str2);
    }

    if (areRotations(str1, str3)) {
        printf("\"%s\" and \"%s\" are rotations of each other.\n", str1, str3);
    } else {
        printf("\"%s\" and \"%s\" are NOT rotations of each other.\n", str1, str3);
    }

    return 0;
}
