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
	printf("All Prime numbers from 1 to %d: ", num);
	check(num);
	return 0;
}
int check(int num)
{
	int i, x, y;
	for(i = 2; i <= num; i++)
	{
		y = 1;
		for(x = 2; x <= i / 2; x++)
		{
			if(i % x == 0)
			{
				y = 0;
				break;
			}
		}
		if(y == 1)
		{
			printf("%d ", i );
		}
	}
	return 0;
}