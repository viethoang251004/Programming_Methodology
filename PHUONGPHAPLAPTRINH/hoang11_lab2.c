#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c,x=0;
	printf("Enter any number: ");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		c=a%10;
		x=x*10+c;
		a=a/10;
	}
	if(b==x)
	{
		printf("This is the palindrome number: %d",b);
	}
	else
	{
		printf("This is not the palindrome number: %d",b);
	}
	return 0;
}