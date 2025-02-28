#include <stdio.h>
#include <math.h>
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
	int i, a = 0, sum = 0, b = 0, c;
	for(i = num; i != 0; i = i / 10)
	{
		a = i % 10;
		if((a >= 0) && (a <= 9))
		sum++;
	}
	for(c = num; c != 0; c = c / 10)
	{
		a = c % 10;
		b += pow(a,sum);
	}
	if(b == num)
	printf("This is the Armstrong number: %d", num);
	else
	printf("This is not the Armstrong number: %d", num);
	return 0;
}