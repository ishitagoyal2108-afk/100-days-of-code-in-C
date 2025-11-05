/*Write a program to print the following pattern:
   *
  ***
 *****
*******
 *****
  ***
   * */
  #include <stdio.h>

int main() {
    int i, j, n = 4; // n = number of lines in upper half

    // Upper half
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)  // spaces
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)  // stars
            printf("*");
        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)  // spaces
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)  // stars
            printf("*");
        printf("\n");
    }

    return 0;
}