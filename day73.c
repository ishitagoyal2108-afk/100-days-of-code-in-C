#include <stdio.h>
#include <ctype.h> // For isspace()

int main() {
    FILE *file;
    char filename[100];
    int ch;
    long characters = 0;
    long words = 0;
    long lines = 0;
    int in_word = 0; // Flag to track if currently inside a word

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    // Read character by character until End Of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        characters++; // Increment character count for every character read

        if (ch == '\n') {
            lines++; // Increment line count for each newline character
        }

        // Check for word boundaries
        if (isspace(ch)) {
            in_word = 0; // Reset in_word flag if a space or newline is encountered
        } else if (in_word == 0) {
            words++;    // Increment word count if a non-space character is found after a space/newline
            in_word = 1; // Set in_word flag to indicate currently inside a word
        }
    }

    // Adjust for the last line if the file doesn't end with a newline
    if (characters > 0 && ch == EOF && lines == 0) {
        lines = 1; // If there are characters but no newlines, it's at least one line
    } else if (characters > 0 && ch == EOF && fgetc(file) != '\n' && lines > 0) {
        // If the file has content and doesn't end with a newline,
        // and we've already counted some lines, ensure the last line is counted.
        // This handles cases where the last line might not have a trailing newline.
        // However, the `lines++` for `\n` already handles most cases.
        // This specific condition is more for edge cases where a file might have
        // content but no newlines at all (handled by the previous `if`).
    }


    printf("\nFile Analysis for '%s':\n", filename);
    printf("Total Characters: %ld\n", characters);
    printf("Total Words: %ld\n", words);
    printf("Total Lines: %ld\n", lines);

    fclose(file); // Close the file

    return 0;
}
