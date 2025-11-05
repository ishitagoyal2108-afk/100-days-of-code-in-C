//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main ()
{
    int a,b;
    printf ("enter a = ");
    scanf("%d",&a);

    printf("enter b = ");
    scanf ("%d",&b);

    printf ( "sum : %d\n" , a + b);
    printf ( "diff : %d\n", a-b);
    printf ("product : %d\n" , a*b);
    printf ( "quotient : %d\n", a/b);
     return 0;
}
