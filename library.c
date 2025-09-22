#include<stdio.h>
int main()
{
    int d, f=0;
    printf("enter number of days you are late: ");
    scanf("%d", &d);
    if (d<=5)
        printf("fine= ₹%d", d*2);
    else if (d<=10 && d>5)
        printf("fine= ₹%d",(d-5)*4+5*2);
    else if (d<=20 && d>10)
        printf("fine= ₹%d", (d-10)*6+5*2+5*4);
    else if (d>=30)
        printf("membership cancelled");
    return 0;
}