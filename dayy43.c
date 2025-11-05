#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int i, len;
    int flag = 0; // Flag to indicate if the string is not a palindrome

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from the user

    len = strlen(str); // Get the length of the string

    // Loop through the string from both ends towards the middle
    for (i = 0; i < len / 2; i++) {
        // Compare characters from the beginning and the end
        if (str[i] != str[len - i - 1]) {
            flag = 1; // Set flag to 1 if characters don't match
            break;    // Exit the loop as it's not a palindrome
        }
    }

    // Check the flag to determine if it's a palindrome
    if (flag) {
        printf("\"%s\" is not a palindrome.\n", str);
    } else {
        printf("\"%s\" is a palindrome.\n", str);
    }

    return 0;
}
