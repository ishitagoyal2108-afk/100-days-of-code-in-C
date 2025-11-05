#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string, including spaces

    // Remove the trailing newline character if present from fgets
    str[strcspn(str, "\n")] = 0;

    len = strlen(str); // Get the length of the string

    for (i = 0; i < len; i++) {
        // Check if the current character is a vowel (case-insensitive)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            // If it's a vowel, shift all subsequent characters to the left
            for (j = i; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = '\0'; // Null-terminate the new end of the string
            len--; // Decrease the length of the string
            i--; // Decrement i to recheck the character at the current position
                 // (as a new character has moved into this position)
        }
    }

    printf("String after removing vowels: %s\n", str);

    return 0;
}
