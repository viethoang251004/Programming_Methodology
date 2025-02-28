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
	int x, i, sum = 0, y, a, b, c = 0, d = 0, e = 0, f = 0, z = 0;
	for(i = num; i != 0; i = i / 10)
	{
		x = i % 10;
		if((x >= 0) && (x <= 9))
			sum += 1;
	}
	y = floor(sum / 2);
	a = ceil(sum / 2);
	for(b = 1; b <= y; b++)
	{
		c = num % 10;
		d = d + c * pow(10, b - 1);
		num = num / 10;
	}
	while(num != 0)
	{
		e = e * 10;
		e = e + num % 10;
		num = num / 10;
	}
	for(b = 1; b <= y; b++)
	{
		f = e % 10;
		z = z + f * pow(10, b - 1);
		e = e / 10;
	}
	if(z == d)
	{
		printf("This is the palindrome number.");
	}
	else
	{
		printf("This is not the palindrome number.");
	}
	return num;
}