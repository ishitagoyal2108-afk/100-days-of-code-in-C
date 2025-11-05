#include <stdio.h> // Required for file operations (fopen, fclose, fgetc, fputc)
#include <ctype.h> // Required for character case conversion (toupper)

int main() {
    FILE *inputFile, *outputFile; // Declare file pointers
    char character; // Variable to store each character read from the file

    // Open input.txt in read mode ("r")
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt. Make sure the file exists.\n");
        return 1; // Indicate an error
    }

    // Open output.txt in write mode ("w")
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output.txt. Cannot write to file.\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Indicate an error
    }

    // Read characters from input.txt until the end of the file (EOF)
    while ((character = fgetc(inputFile)) != EOF) {
        // Convert the character to uppercase using toupper()
        // toupper() returns the uppercase equivalent if it's a lowercase letter,
        // otherwise, it returns the character unchanged.
        char upperCharacter = toupper(character);

        // Write the converted character to output.txt
        fputc(upperCharacter, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted to uppercase and written to output.txt.\n");

    return 0; // Indicate successful execution
}
