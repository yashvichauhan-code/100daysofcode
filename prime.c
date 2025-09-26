#include <stdio.h>
int main()
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    if (n<2)
    {
        printf("not prime\n");
    }
    for (int i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("not prime\n");
        }
        break;
    }
    printf("prime");
    return 0;
}