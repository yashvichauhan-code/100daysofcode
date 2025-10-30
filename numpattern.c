#include <stdio.h>
int main()
{
    int l;
    printf("enter num of lines: ");
    scanf("%d", &l);
    for (int i=1; i<=l; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
//fixing github
/*
1
12
123
1234
12345
*/