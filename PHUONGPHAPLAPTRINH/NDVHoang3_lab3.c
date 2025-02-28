#include <stdio.h>
int number(int);
int table(int);
int table(int num)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		
		printf("%d x %d = %d\n", num, i, (num * i));
	}
	return 0;
}
int main()
{
	int i, num;
	printf("Enter a number to generate the table in C: ");
	scanf("%d", &i);
	while (num <= 0)
	{
		printf("Enter again the number: ");
		scanf("%d", &num);
	}
	table(i);
	return 0;
}