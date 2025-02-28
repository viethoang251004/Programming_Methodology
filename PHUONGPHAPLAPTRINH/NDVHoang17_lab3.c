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
	printf("All Perfect numbers from 1 to %d: ", num);
	check(num);
	return 0;
}
int check(int num)
{
	int i, x = 0, y = 0, z = 0, a = 0, b;
	for(i = 1; i <= num; i++)
	{
		b = 0;
		a = 0;
		for(y = 1; y < i; y++)
		{
			if(i % y == 0)
			{
				b = b + y;
			}
			a = b;
		}
		if(a == i && a !=1)
		{
			printf("%d ", a);
		}
	}
	return 0;
}