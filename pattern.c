#include <stdio.h>
int main()
{
    int l, astr;
    printf("enter num of lines:");
    scanf("%d", &l);
    printf("enter num of asterick:");
    scanf("%d", &astr);
    for (int i=1; i<=l; i++)
    {
        for(int j=1; j<=astr; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//fix
