#include <stdio.h>
int main() 
{
    int a, b, x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x =  a, y = b;
    while (y != 0) 
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("hcf of %d and %d is %d\n", a, b, x);
    return 0;
}