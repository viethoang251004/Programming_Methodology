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
		if((z >= 0) && (z <= 9))
		sum += 1;
	}
	printf("Number of digits of %d: %d", num, sum);
	return 0;
}