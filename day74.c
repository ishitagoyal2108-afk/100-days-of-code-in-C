#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];
    int ch; // Use int for character to handle EOF

    // Get source file path from the user
    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    // Get destination file path from the user
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    // Open source file in read mode ("r")
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'.\n", sourcePath);
        exit(EXIT_FAILURE);
    }

    // Open destination file in write mode ("w")
    // This will create the file if it doesn't exist, or overwrite it if it does.
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file '%s'.\n", destPath);
        fclose(sourceFile); // Close source file before exiting
        exit(EXIT_FAILURE);
    }

    // Copy contents character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully from '%s' to '%s'.\n", sourcePath, destPath);

    return 0;
}
