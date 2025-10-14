//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter celcius:");
    scanf("%f", &celcius);
    fahrenheit= (celcius*9/5)+32;
    printf("fahrenheit: %f\n", fahrenheit);
    return 0;
}
//fix