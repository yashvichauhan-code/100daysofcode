#include<stdio.h>
int main()
{ 
    int a,b,c,output;
    printf("enter side a,b,c of a triangle:");
    scanf("%d %d %d",&a, &b, &c);
    if (a+b>c && b+c>a && a+c>b && a>0 && b>0 && c>0)
    {
        printf("triangle is valid\n");
        output=1;
    }
    else
    {
        printf("triangle is invalid\n");
        output=0;
    }
    if (a==b && b==c && output==1)
    {
        printf("it is an equilateral triangle\n");
    }
    else if (a==b || b==c || a==c && output==1)
    {
        printf("it is an isoceles triangle\n");
    }
    if (a*a + b*b==c*c || b*b + c*c==a*a || a*a + c*c== b*b && output==1)
    {
        printf("it is a right angled triangle\n");
    }
    else if (a!=b && b!=c && a!=c && output==1)
    {
        printf("it is a scalene triangle\n");
    }
    return 0;
}
//fixed