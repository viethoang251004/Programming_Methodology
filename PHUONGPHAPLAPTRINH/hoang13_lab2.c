#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,sum=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(b=a;a!=0;a=a/10)
	{
		c=a%10;
		sum=sum+(c*c*c);
	}
	if(sum==b)
	{
		printf("This is the Armstrong number: %d",b);
	}
	else
	{
		printf("This is not the Armstrong number: %d",b);
	}
	return 0;
}