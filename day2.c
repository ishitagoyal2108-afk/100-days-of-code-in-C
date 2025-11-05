//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main ()
{
    int a , b ;
    // a and b are length and bredth of rectangle
    printf ("enter a ");
    scanf ("%d", &a);
    printf ("enter b ");
    scanf ("%d", &b);
    printf ( "perimeter : %d\n" , 2*(a+b) );
    printf ("area : %d\n", a*b);
    return 0;
}