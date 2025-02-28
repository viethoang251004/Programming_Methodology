#include<stdio.h>
int tong(int x)
{
	int l, s = 0;
	for (l = 2; l <= x; l += 2)
	{
		s += l;
	}
	return s;
}
int main()
{
	int a;
	printf("Input upper limit: ");
	scanf("%d", &a);
	int sum = tong(12);
	
	printf("Sum of all even number between 1 to %d = %d", a, sum);
	return 0;
}