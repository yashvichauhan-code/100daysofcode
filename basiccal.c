#include <stdio.h>
int main()
{
    int n1, n2;
    char m;
    printf("enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("enter symbol :");
    scanf(" %c", &m); // Note the space before %c to consume any leftover newline
    if (m=='+')
        printf("%d", n1+n2);
    else if (m=='-')
        printf("%d", n1-n2);
    else if (m=='*')
        printf("%d", n1*n2);
    else if (m=='%')
        printf("%d", n1%n2);
    else if (m=='/')
        printf("%d", n1/n2);
    return 0;
}