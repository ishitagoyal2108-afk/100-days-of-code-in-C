/*Write a program to print the following pattern:
5
45
345
2345
12345*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {                 // Loop for rows
        for (j = 6 - i; j <= 5; j++) {         // Print numbers from (6-i) to 5
            printf("%d", j);
        }
        printf("\n");   // Move to next line
    }

    return 0;
}