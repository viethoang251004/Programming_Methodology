#include <stdio.h>
int main()
{
	int i,a,s=0;
	printf("Input upper limit: ");
	scanf("%d",&a);
	for(i=1; i<=a; i+=2)
	{
		s += i;
	}
	printf("Sum of odd numbers = %d", s);
}