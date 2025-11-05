//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("the integer is positive");
    } else if (num==0){
        printf("the integer is 0");
    } else{
        printf("the integer is negative");
    }
    return 0;
}