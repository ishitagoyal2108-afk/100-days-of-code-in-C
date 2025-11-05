//Write a program to check if a number is a palindrome.
#include <stdio.h>
void main() {
    int num, o, r = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    o = num;

    while(num != 0) {
        int digit = num % 10;
        r = r * 10 + digit;
        num /= 10;
    }

    if(o == r) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}