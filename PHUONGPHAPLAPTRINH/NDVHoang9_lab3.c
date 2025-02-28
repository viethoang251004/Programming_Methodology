#include <stdio.h>
#include <math.h>
int check(int);
int main()
{
	int i, num, first, last, sum = 0, x = 1, y = 0, z = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	check(num);
	return 0;
}
int check(int num)
{
	int i, first, last, sum = 0, x = 1, y = 0, z = 0;
	first = num;
	last = num;
	while(first >= 10)
	{
		first = first / 10;
	}
	while(last >= 10)
	{
		last = last % 10;
	}
	for(i = num; i != 0; i = i / 10)
	{
		z = i % 10;
		if((z >= 0) && (z <= 9))
		sum += 1;
	}
	y = num + first - last;
	y = y + pow(10, sum - 1) * last - pow(10, sum - 1) * first;
	printf("Number after swapped: %d", y);
	return num;
}