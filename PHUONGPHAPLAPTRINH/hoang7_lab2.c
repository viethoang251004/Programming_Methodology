#include <stdio.h>
int main ()
{
	int x,y,p=1;
	printf("Enter any number: ");
	scanf("%d",&x);
	while(x!=0)
	{
		y=x%10;
		p*=y;
		x/=10;
	}
	printf("%d",p);
}