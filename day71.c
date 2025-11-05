#include <stdio.h> // Required for file I/O functions like fopen, fprintf, fclose

int main() {
    FILE *filePointer; // Declare a file pointer
    char name[50];     // Array to store the user's name
    int age;           // Variable to store the user's age

    // Open the file "info.txt" in write mode ("w")
    // If the file does not exist, it will be created.
    // If the file exists, its content will be truncated (emptied).
    filePointer = fopen("info.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Could not open the file info.txt for writing.\n");
        return 1; // Indicate an error
    }

    // Get user input for name and age
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read name including spaces
    // Remove the trailing newline character from fgets input if present
    name[strcspn(name, "\n")] = 0; 

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write the name and age to the file using fprintf()
    fprintf(filePointer, "Name: %s\n", name);
    fprintf(filePointer, "Age: %d\n", age);

    // Close the file
    fclose(filePointer);

    // Display a confirmation message
    printf("Data successfully saved to info.txt.\n");

    return 0; // Indicate successful execution
}
