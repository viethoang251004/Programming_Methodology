#include <stdio.h>
void sum(int a)
{
	int i, s = 0;
	for(i = 1; i <= a; i += 2)
	{
		s += i;
	}
	printf("Sum of odd numbers = %d", s);
}
int main()
{
	int a;
	printf("Input upper limit: ");
	scanf("%d", &a);
	sum(a);
	return 0;
}