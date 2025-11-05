#include <stdio.h>
#include <string.h> // Required for strlen()

int main() {
    char str[100];
    int length, i, j, k;

    printf("Enter a string: ");
    scanf("%s", str); // Read the input string

    length = strlen(str); // Get the length of the string

    printf("All substrings of \"%s\" are:\n", str);

    // Outer loop for starting position
    for (i = 0; i < length; i++) {
        // Inner loop for ending position
        for (j = i; j < length; j++) {
            // Loop to print the substring from str[i] to str[j]
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); // Newline after each substring
        }
    }

    return 0;
}
