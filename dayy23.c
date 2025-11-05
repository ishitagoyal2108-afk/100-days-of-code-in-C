/*Write a program to print the following pattern:
*****
*****
*****
*****
******/

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {         // Loop for rows
        for (j = 1; j <= 5; j++) {     // Loop for columns
            printf("*");
        }
        printf("\n");   // Move to next line after each row
    }

    return 0;
}