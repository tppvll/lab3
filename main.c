#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Stepen(int arg, int n)
{
	int b = 1;

	if (n >= 0)
	{
		for (int i = 1; i <= n; i++)

			b = arg * b;

			return b;
		
	}
	else
	{
		
		for (int i = -1; i >= n; i--)
		
			b = arg * b;

			return b;
		
	}
}

int main()
{
	int arg, n;

	printf("Enter the number: ");
	if (scanf("%d", &arg) != 1)
		return printf("Wrong value");

	printf("Enter the power exponent: ");
	if (scanf("%d", &n) != 1)
		return printf("Wrong value");

	if (n >= 0)
		printf("Value of a power is: %d", Stepen(arg, n));
	else printf("Value of a power is: 1/%d", Stepen(arg, n));
}
