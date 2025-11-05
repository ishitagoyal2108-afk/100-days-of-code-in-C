#include <stdio.h>
#include <string.h> // Required for strlen() if used, but not strictly necessary for null-terminated strings

int main() {
    char str[100]; // Declare a character array to store the string
    int i;

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    // Iterate through each character of the string until the null terminator is reached
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an uppercase letter
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert uppercase to lowercase by adding 32 (ASCII difference)
        } 
        // Check if the character is a lowercase letter
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert lowercase to uppercase by subtracting 32 (ASCII difference)
        }
        // If the character is not an alphabet, it remains unchanged.
    }

    printf("Toggled string: %s\n", str); // Print the modified string

    return 0;
}
