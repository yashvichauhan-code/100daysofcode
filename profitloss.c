#include<stdio.h>
int main()
{
    float sp, cp, p, l, pp, lp;
    int profitloss;
    printf("enter cost prize and selling prize (cp,sp) : ");
    scanf("%f %f", &cp, &sp);
    if (cp>sp)
    {
        l=cp-sp;
        profitloss=1;
    }
    else if (sp>cp)
    {
        p=sp-cp;
        profitloss=2;
    }
    switch (profitloss){
        case 1:
            lp= (l/cp)*100;
            printf("loss percentage = %.2f",lp);
            break;
        case 2:
            pp= (p/cp)*100;
            printf("profit percentage = %.2f",pp);
            break;
        default:
            printf("no profit no loss");
            break;
    }
    return 0;
}