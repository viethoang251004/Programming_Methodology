#include <stdio.h>
int factorial(int n)
{
	if (n >= 1)
		return n * factorial(n - 1);
	else
		return 1;
}
int main()
{
	int n, x;
	printf("Enter a number to calculate: ");
	scanf("%d", &n);
	printf("Factorial of n = %d", factorial(n));
}