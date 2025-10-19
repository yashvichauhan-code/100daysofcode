#include<stdio.h>
int main()
{
    char a;
    printf("enter any alphabet: ");
    scanf("%c", &a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        printf("vowel");
    else
        printf("consonant");
}
//fix