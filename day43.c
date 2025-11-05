#include <stdio.h>
#include <string.h> // Required for strlen()

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    char myString[100]; // Declare a character array to store the string

    printf("Enter a string: ");
    scanf("%s", myString); // Read the string from the user

    printf("Original string: %s\n", myString);

    reverseString(myString); // Call the function to reverse the string

    printf("Reversed string: %s\n", myString);

    return 0;
}
