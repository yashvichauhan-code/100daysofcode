#include <stdio.h>
int main()
{
    int n, rev=0, rem=0, temp;
    printf("enter a number:");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (rev == n)
        printf("num is palindrome");
    else
        printf("num is not a palindrome");
    return 0;
}