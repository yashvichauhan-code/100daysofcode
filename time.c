#include<stdio.h>
int main()
{
    int totalsec, hour, min, sec;
    printf("enter time in seconds:");
    scanf("%d", &totalsec);
    hour=totalsec/3600;
    min=(totalsec%3600)/60;
    sec=(totalsec%3600)%60;
    printf("%d :%d :%d", hour, min , sec);
    return 0;
}
//fix
