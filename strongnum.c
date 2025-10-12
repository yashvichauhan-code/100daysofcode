// Program to check if a number is a strong number
#include <stdio.h>
int factorial(int n) {
    int f = 1;
    for (int i=2; i<=n; i++)
        f*=i;
    return f;
}
int main() {
    int n, original, sum = 0, digit;
    printf("Enter number: ");
    scanf ("%d", &n);
    original = n;
    if (n <= 0) {
        printf("invalid input\n");
        return 1;
    }
    while (n > 0) {
        digit=n%10;
        sum+=factorial(digit);
        n/=10;
    }
    if (sum == original)
        printf("%d is a strong number\n", original);
    else
        printf("%d is not a strong number\n", original);
    return 0;
}