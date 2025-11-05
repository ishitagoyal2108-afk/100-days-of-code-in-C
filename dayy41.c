#include <stdio.h>

int main() {
    char str[] = "Hello"; // Declare and initialize a string
    int i = 0;

    // Loop through the string until the null terminator is encountered
    while (str[i] != '\0') {
        printf("%c\n", str[i]); // Print the character and a newline
        i++;
    }

    return 0;
}
