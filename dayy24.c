/*Write a program to print the following pattern:
1
12
123
1234
12345*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {         // Loop for rows
        for (j = 1; j <= i; j++) {     // Print numbers from 1 to i
            printf("%d", j);
        }
        printf("\n");   // Move to next line
    }

    return 0;
}