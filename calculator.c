//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int num1, num2, sum, diff, prod;
    float quot;
    printf("enter a number : ");
    scanf("%d", &num1);
    printf("enter a second number : ");
    scanf("%d", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;
    printf("sum: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("product: %d\n", prod);
    printf("quotient: %f\n", quot);
    return 0;
}
//fix