#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    c = a;
    a = b;
    b = c ;
    
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}