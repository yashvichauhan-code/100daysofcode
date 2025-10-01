// Program to find the product of odd digits of a number
#include <stdio.h>

int main() 
{
	int n, product = 1, digit, has_odd = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int temp = n;
	while (temp != 0) 
    {
		digit = temp % 10;
		if (digit % 2 != 0) 
        {
			product *= digit;
			has_odd = 1;
		}
		temp /= 10;
	}
	if (has_odd==1)
		printf("Product of odd digits of %d is %d\n", n, product);
	else
		printf("No odd digits found in %d\n", n);
	return 0;
}
