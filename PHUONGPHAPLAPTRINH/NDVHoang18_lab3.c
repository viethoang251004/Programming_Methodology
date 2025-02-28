#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	int num, i;
	int a[i];
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
	int i, s = 0;
	int max = 100;
	int a[max];
	for(i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}
	for(i = i - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
	return 0;
}