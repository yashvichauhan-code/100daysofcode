#include <stdio.h>
int main()
/*{
    int l;
    printf("enter num of lines: ");
    scanf("%d", &l);
    for (int i=1; i<=l; i++){
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
{
    int l;
    printf("enter num of lines: ");
    scanf("%d", &l);
    for (int i=l; i>=1; i--)
    {
        for (int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//fix
/*
*****
****
***
**
*
*/