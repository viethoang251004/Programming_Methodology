#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter any number: ");
	scanf("%d",&x);
	while(x!=0)
	{
		y=y*10;
		y=y+x%10;
		x=x/10;
	}
	printf("Reverse of the number: %d",y);
}