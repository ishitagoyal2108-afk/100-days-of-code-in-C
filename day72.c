#include <stdio.h> // Required for file operations and input/output functions

#define MAX_LINE_LENGTH 256 // Define a buffer size for reading lines

int main() {
    FILE *filePointer; // Declare a file pointer
    char buffer[MAX_LINE_LENGTH]; // Declare a character buffer to store each line

    // Open the file "info.txt" in read mode ("r")
    filePointer = fopen("info.txt", "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open the file 'info.txt'. Please ensure it exists in the same directory.\n");
        return 1; // Indicate an error
    }

    printf("Contents of 'info.txt':\n");

    // Read lines from the file until EOF is reached or an error occurs
    while (fgets(buffer, MAX_LINE_LENGTH, filePointer) != NULL) {
        printf("%s", buffer); // Print the read line to the console
    }

    // Close the file
    fclose(filePointer);

    return 0; // Indicate successful execution
}
