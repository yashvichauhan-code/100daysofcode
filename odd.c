#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("enter number: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++)
    {
        if (i%2!=0)
            sum+=i;
    }
    printf("%d", sum);
    return 0;
}
//fix