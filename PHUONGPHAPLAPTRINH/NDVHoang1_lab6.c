#include <stdio.h>
int primenumber(int x, int y)
{
	if (y < 2)
		return 0;
	if (x > y / 2)
		return 1;
	if (y % x == 0)
		return 0;
	return primenumber(x + 1, y);
}
int main()
{
	int i, num;
	printf("Enter a number to check: ");
	scanf("%d", &num);
	if (primenumber(2, num) == 1)
		printf("%d is the prime number.", num);
	else
		printf("%d is not the prime number.", num);
	return 0;
}