#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i = 0;     // Loop counter

    printf("Enter a lowercase string: ");
    // Use fgets for safer input compared to gets()
    fgets(str, sizeof(str), stdin); 

    // Iterate through the string until the null terminator is reached
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase by subtracting 32 (ASCII difference)
            str[i] = str[i] - 32; 
        }
        i++; // Move to the next character
    }

    printf("Uppercase string: %s", str); // Print the modified string

    return 0;
}
