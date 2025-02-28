#include <stdio.h>
int check(int);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	check(num);
	return 0;
}
int check(int num)
{
	int i, z = 0, sum = 0;
	for(i = num; i != 0; i = i / 10)
	{
		z = i % 10;
		sum += z;
	}
	printf("Sum of digits of %d: %d", num, sum);
	return 0;
}