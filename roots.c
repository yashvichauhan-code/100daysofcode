#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, disc, r1, r2;
    printf("enter a,b,c : ");
    scanf("%f %f %f", &a, &b, &c);
    disc= b*b - (4*a*c);
    r1= (-b + sqrt(disc))/(2*a);
    r2= (-b - sqrt(disc))/(2*a);
    if (disc==0)
    {
        printf("roots are equal and same: %.2f", r1);
    }
    if (disc<0)
    {
        printf("roots are complex: ");
    }
    if(disc>0)
    {
        printf("roots are real and distint: %.2f, %.2f", r1, r2);
    }
    return 0;
}