//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    printf("enter length of rectangle: ");
    scanf("%d", &length);
    printf("enter breadth of rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("area = %d\n", area);
    printf("perimeter = %d\n", perimeter);
    return 0;
}