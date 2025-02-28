#include <stdio.h>
int exponentation(int n)
{
	if (n > 0 || n < 0)
		return 2 * exponentation(n - 1);
	else
		return 1;
}
int main()
{
	int n, x;
	printf("Enter a number to calculate: ");
	scanf("%d", &n);
	printf("Exponentation of 2 ^ %d = %d", n, exponentation(n));
}