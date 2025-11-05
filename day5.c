//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}