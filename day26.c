/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345*/
 #include <stdio.h>

int main() {
    int i, j, k;
    for (i = 5; i >= 1; i--) {
        // print spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // print numbers
        for (k = i; k <= 5; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
