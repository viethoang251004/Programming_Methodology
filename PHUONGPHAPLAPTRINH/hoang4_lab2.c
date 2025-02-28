#include <stdio.h>
int main()
{
	int i,x,s=0;
	printf("Enter any number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		s+=i;
	}
	printf("Sum of first %d natural numbers = %d",x,s);
}