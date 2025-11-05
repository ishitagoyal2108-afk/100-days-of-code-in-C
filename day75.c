#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *filePointer;
    char textToAppend[100]; // Buffer to store the user's input

    // Open the file in append mode ("a")
    // If the file does not exist, it will be created.
    // If it exists, new data will be added at the end.
    filePointer = fopen("my_file.txt", "a");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        exit(1); // Exit with an error code
    }

    printf("Enter the line of text to append: ");
    // Read a line of text from the user, including spaces
    fgets(textToAppend, sizeof(textToAppend), stdin);

    // Write the user's input to the file
    fprintf(filePointer, "%s", textToAppend);

    // Close the file
    fclose(filePointer);

    printf("Text successfully appended to my_file.txt\n");

    return 0; // Indicate successful execution
}
