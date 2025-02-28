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
	int i, sum = 0;
	for(i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum += i;
		}
	}
	if(num == sum)
	printf("This is the Perfect number: %d", num);
	else
	printf("This is not the Perfect number: %d", num);
	return 0;
}