//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int radius, area, circumference;
    printf("enter radius of circle: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("area = %d\n", area);
    printf("circumference = %d\n", circumference);
    return 0;
}
//fix