#include <stdio.h>
#include <string.h>

// Function to reverse a character sequence between two pointers
void reverse(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
    }
}

// Function to reverse words in a sentence while preserving word order
void reverseWordsInSentence(char* s) {
    char* word_begin = s;
    char* temp = s;

    while (*temp) {
        temp++;
        if (*temp == '\0') { // End of string, reverse the last word
            reverse(word_begin, temp - 1);
        } else if (*temp == ' ') { // Space encountered, reverse the current word
            reverse(word_begin, temp - 1);
            word_begin = temp + 1; // Move to the beginning of the next word
        }
    }
}

int main() {
    char sentence[] = "This is a sample sentence";
    printf("Original sentence: %s\n", sentence);

    reverseWordsInSentence(sentence);
    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}
