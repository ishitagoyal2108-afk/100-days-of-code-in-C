/*Write a program to print the following pattern:
*****
 ****
  ***
   **
    **/
   #include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 0; i < n; i++) {
        // Print spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}