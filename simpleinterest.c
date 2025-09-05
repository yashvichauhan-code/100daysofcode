//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t;
    float si, ci;
    printf("enter principal, rate, time:");
    scanf("%f %f %f", &p,&r,&t);
    si=p*r*t/100;
    ci=p*pow((1 + r/100), t)-p;
    printf("simple interest= %.1f, compound interest= %.1f", si, ci);
    return 0;
}