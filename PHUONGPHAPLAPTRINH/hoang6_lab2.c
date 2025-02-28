#include <stdio.h>
int main()
{
	int x,s,y;
	printf("Enter any number: ");
	for(scanf("%d",&x);x!=0;x=x/10)
	{
		y=x%10;
		s=s+y;
	}
	printf("Sum of digits of the number: %d",s);
}