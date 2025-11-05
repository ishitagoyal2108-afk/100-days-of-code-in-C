#include <stdio.h>
#include <ctype.h> // For isdigit() and isspace() functions

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int specialChars = 0;
    int i = 0;

    printf("Enter a string: ");
    // Using fgets to safely read a line including spaces
    fgets(str, sizeof(str), stdin);

    // Loop through each character of the string
    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
        } else if (str[i] != '\n') { // Exclude the newline character from special characters
            specialChars++;
        }
        i++;
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}
