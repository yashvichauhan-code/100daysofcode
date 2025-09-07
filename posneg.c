#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d", &num);
    if (num!=0)
    {
        if(num>0)
        {
            printf("positive");
        }
        else
        {
            printf("negative");
        }
    }
    else
    {
        printf("zero");
    }
    return 0;
}