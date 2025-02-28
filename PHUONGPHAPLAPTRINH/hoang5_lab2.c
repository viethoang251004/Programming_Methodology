#include <stdio.h>
int main()
{
	int x,first,last;
	printf("Enter any number: ");
	scanf("%d",&x);
	last=x%10;
	while(x>=10)
	{
		x=x/10;
	}
	first=x;
	printf("first = %d and last = %d",first,last);
}