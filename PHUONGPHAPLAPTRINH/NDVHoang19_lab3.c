#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num <= 0)
	{
		printf("Enter again a number: ");
		scanf("%d", &num);
	}
	check(num);
	return 0;
}
int check(int num)
{
	int i, x = 1;
	for(i = 1; i <= num; i++)
	{
		x *= i;
	}
	printf("Factorial of %d: %d", num, x);
	return 0;
}