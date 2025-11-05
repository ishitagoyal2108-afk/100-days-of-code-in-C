//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){

    float a,b,c,d,e,f,g;
    printf("Enter a,b,c of a quadratic equation of form ax^2+bx+c: ");
    scanf("%f %f %f",&a,&b,&c);
    
    d=b*b-4*a*c;

    if (d>0) {
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        printf("Roots are real and distinct: %f and %f",e,f);
    }
    else if(d==0){
        g=-b/(2*a);
        printf("Roots are real and equal: %f",g);
    }
    else{
        printf("Roots are imaginary.");
    }
    return 0;
}