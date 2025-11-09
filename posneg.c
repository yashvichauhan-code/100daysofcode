#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int pos= 0, neg= 0, zero= 0;
    for (int i = 0; i < n; i++) {
        int num;
        printf("enter element: ");
        if (scanf("%d", &num) != 1) {
            printf("invalid input\n");
            return 1;
        }
        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;
    }
    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    return 0;
}