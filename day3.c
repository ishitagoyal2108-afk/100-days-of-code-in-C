//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main ()
{
    float celsius , fahrenheit ;
    printf("enter temperature in celsius = ");
    scanf("%f ", &celsius);

    fahrenheit = (celsius * 9/5)+32;
    
    printf("fahrenheit = %.2f\n",fahrenheit);
  return 0;
}
