#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fptr;
    char filename[100];
    char ch;

    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Open the file in read mode
    fptr = fopen(filename, "r");

    // Check if the file pointer is NULL
    if (fptr == NULL) {
        printf("Error: Could not open file '%s'. It may not exist or you lack permissions.\n", filename);
        exit(EXIT_FAILURE); // Exit the program with an error code
    }

    printf("Content of '%s':\n", filename);

    // Read and display the content character by character
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(fptr);

    return 0; // Indicate successful execution
}
