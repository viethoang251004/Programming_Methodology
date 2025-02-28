#include <stdio.h>
int exponentation(int n, int x)
{
	if (n > 0 || n < 0)
		return x * exponentation(n - 1, x);
	else
		return 1;
}
int main()
{
	int n, x;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Exponentation of %d ^ %d = %d", x, n, exponentation(n, x));
}