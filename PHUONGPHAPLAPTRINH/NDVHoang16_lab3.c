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
	printf("All Armstrong numbers from 1 to %d: ", num);
	check(num);
	return 0;
}
int check(int num)
{
	int i, x = 0, y = 0, z = 0, a = 0, b;
	for(i = 1; i <= num; i++)
	{
		z = 0;
		a = 0;
		for(y = i; y != 0; y = y / 10)
		{
			x = y % 10;
			if ((x >= 0) && (x <= 9))
			z += 1;
		}
		for(b = i; b != 0; b = b / 10)
		{
			x = b % 10;
			a += pow(x,z);
		}
		if(a == i)
		printf("%d ",i);
	}
	return 0;
}