#include <stdio.h>
#include <ctype.h> // Required for toupper() and tolower()

#define MAX_LENGTH 100 // Define a maximum length for the input string

int main() {
    char sentence[MAX_LENGTH];
    int i = 0;
    int new_sentence = 1; // Flag to indicate if we are at the start of a new sentence

    printf("Enter a string: ");
    fgets(sentence, MAX_LENGTH, stdin); // Read the string including spaces

    // Iterate through the string
    while (sentence[i] != '\0') {
        if (new_sentence && isalpha(sentence[i])) {
            // Capitalize the first letter of a new sentence
            sentence[i] = toupper(sentence[i]);
            new_sentence = 0; // Reset the flag
        } else if (isalpha(sentence[i])) {
            // Convert other letters to lowercase
            sentence[i] = tolower(sentence[i]);
        }

        // Check for sentence-ending punctuation to mark the start of a new sentence
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') {
            new_sentence = 1;
        }
        i++;
    }

    printf("Sentence case string: %s\n", sentence);

    return 0;
}
