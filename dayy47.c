#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isspace()

int main() {
    char sentence[1000]; // To store the input sentence
    char longestWord[100]; // To store the longest word found
    char currentWord[100]; // To store the current word being processed
    int maxLength = 0;
    int currentLength = 0;
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Read the sentence, including spaces

    // Remove the trailing newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    while (sentence[i] != '\0') {
        // Skip leading whitespace
        while (isspace(sentence[i])) {
            i++;
        }

        // If not end of string, start processing a word
        if (sentence[i] != '\0') {
            j = 0;
            currentLength = 0;
            // Copy characters of the current word until a space or end of string is found
            while (sentence[i] != '\0' && !isspace(sentence[i])) {
                currentWord[j++] = sentence[i++];
                currentLength++;
            }
            currentWord[j] = '\0'; // Null-terminate the current word

            // Compare the length of the current word with the longest found so far
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord); // Copy the current word if it's longer
            }
        }
    }

    if (maxLength > 0) {
        printf("The longest word is: %s (length: %d)\n", longestWord, maxLength);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}
