//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main(void) {
    int n;
    printf("enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("invalid number of elements\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("enter element: ");
        if (scanf("%d", &arr[i]) != 1) {
            printf("invalid input\n");
            return 1;
        }
    }

    int neg = 0, pos = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] == 0)
            zero++;
        else
            neg++;
    }

    printf("Positive: %d\n", pos);
    printf("Negative: %d\n", neg);
    printf("Zero: %d\n", zero);
    return 0;
}