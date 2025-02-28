#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	int num, x = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	check(num);
	return 0;
}
int check(int num)
{
	int x = 0;
	while(num != 0)
	{
		x = x * 10;
		x = x + num % 10;
		num = num / 10;
	}
	printf("Reverse of the number: %d", x);
	return 0;
}