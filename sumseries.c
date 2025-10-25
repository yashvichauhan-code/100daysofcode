//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Number of terms must be positive\n");
		return 0;
	}
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		int num = 2 * i - 1;
		int den = (i == 1) ? 1 : 2 * i;
		sum += (float)num / den;
	}
	printf("Approximate sum: %.1f\n", sum);
	return 0;
}
//fix