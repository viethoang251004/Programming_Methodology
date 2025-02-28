#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (num <= 0)
	{
		printf("Enter again a number: ");
		scanf("%d", &num);
	}
	check(num);
	return 0;
}
int check(int num)
{
	int a, sum = 0;
	if (num == 1)
	{
		printf("This is the Prime number: %d", num);
	}
	else
	{
		for (a = 1; a <= num; a++)
		{
			if (num % a == 0)
				sum++;
		}
		if (sum == 2)
		{
			printf("This is the Prime number: %d", num);
		}
		else
		{
			printf("This is not the Prime number: %d", num);
		}
	}
	return 0;
}