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
	int i, first, last;
	first = num;
	last = num;
	while (first >= 10)
	{
		first = first / 10;
	}
	while (last >= 10)
	{
		last = last % 10;
	}
	printf("First number: %d, last number: %d", first, last);
	return 0;
}