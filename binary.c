//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main()
{
    int n, b[32], i=0;
    printf("enter number: ");
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("Binary: 0");
        return 0;
    }
    while(n>0)
    {
        b[i]=n%2;
        n=n/2;
        i++;
    }
    printf("binary: ");
    for(int j=i-1; j>=0;j--)
    {
        printf("%d", b[j]);
    }
    return 0;
}