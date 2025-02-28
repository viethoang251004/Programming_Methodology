#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		c++;
	}
	if(c==2)
	{
		printf("This is the prime number: %d",a);
	}
	else
	{
		printf("This is not the prime number: %d",a);
	}
	return 0;
}