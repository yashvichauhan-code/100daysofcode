#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);
    if (ch>='a' && ch<='z')
    {
        printf("lowecase alphabet");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("uppercase alphabet");
    }
    else if (ch>='0' && ch<='9')
    {
        printf("digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}