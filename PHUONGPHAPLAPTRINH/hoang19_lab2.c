#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x,y,Factorial;
	printf("Enter a number: ");
	scanf("%d",&y);
	for(x=1;x<=y;x++)
	{
		Factorial*=x;
	}
	printf("Factorial of %d: %d",y,Factorial);
	return 0;
}