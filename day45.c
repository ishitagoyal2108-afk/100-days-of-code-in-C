#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char str[100]; // Declare a character array (string)
    char targetChar; // Declare a character to search for
    int count = 0; // Initialize a counter for the character frequency
    int i; // Loop counter

    printf("Enter a string: ");
    // Using fgets to read a line including spaces, and handling the newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove the trailing newline character

    printf("Enter the character to count: ");
    scanf(" %c", &targetChar); // Read the target character (note the space before %c to consume newline)

    // Iterate through the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == targetChar) {
            count++; // Increment count if the character matches
        }
    }

    printf("The character '%c' appears %d times in the string.\n", targetChar, count);

    return 0;
}
