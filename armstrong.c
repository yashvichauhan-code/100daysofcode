#include<stdio.h>
int main()
{
    int num, r, sum=0, c, temp;
    printf("enter a number:");
    scanf(" %d",&num);
    temp=num;
    while (num > 0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    num=temp;
    if (sum==num)
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    return 0;
}
//fix