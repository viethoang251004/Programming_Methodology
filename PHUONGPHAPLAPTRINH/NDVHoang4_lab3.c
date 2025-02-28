#include <stdio.h>
int natural(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (num <= 0)
	{
		printf("Enter again the number: ");
		scanf("%d", &num);
	}
	natural(num);
	return 0;
}
int natural(int num)
{
	int i, sum = 0;
	for (i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("Sum of all natural numbers from 1 to %d: %d", num, sum);
	return 0;
}