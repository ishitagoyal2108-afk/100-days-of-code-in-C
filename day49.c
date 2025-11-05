#include <stdio.h>
#include <string.h>
#include <ctype.h> // For toupper() and isspace()

void printInitials(char *name) {
    int i = 0;

    // Print the first initial if the name is not empty and starts with a letter
    if (strlen(name) > 0 && isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Iterate through the rest of the string
    while (name[i] != '\0') {
        // If a space is found, look for the next non-space character
        if (isspace(name[i])) {
            // Skip multiple spaces
            while (isspace(name[i]) && name[i] != '\0') {
                i++;
            }
            // If a non-space character is found after spaces, print its uppercase initial
            if (name[i] != '\0' && isalpha(name[i])) {
                printf(".%c", toupper(name[i]));
            }
        }
        i++;
    }
    printf("\n"); // Newline for better formatting
}

int main() {
    char name[100]; // Declare a character array to store the name

    printf("Enter a full name: ");
    // Read the entire line including spaces
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove the trailing newline character if present
        name[strcspn(name, "\n")] = 0;
        printf("Initials: ");
        printInitials(name);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
