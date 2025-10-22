#include <stdio.h>
int main()
{
    int u, bill = 0;
    printf("enter units: ");
    scanf("%d", &u);
    if (u <= 100)
        printf("bill: ₹%d",u * 5);
    else if (u <= 200)
        printf("bill: ₹%d", 100 * 5 + (u - 100) * 7);
    else if (u <= 300)
        printf("bill: ₹%d",100 * 5 + 100 * 7 + (u - 200) * 10);
    else
        printf("bill: ₹%d",100 * 5 + 100 * 7 + 100 * 10 + (u - 300) * 12);
    return 0;
}
//fix