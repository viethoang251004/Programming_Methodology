#include <stdio.h>
#include <stdlib.h>
int check(int x, int y)
{
	if (x > 0)
	{
		y++;
		return check(x / 10, y);
	}
}
int main()
{
	int x, y = 0;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("The number of digits of a positive integer number %d: %d", x, check(x, y));
}