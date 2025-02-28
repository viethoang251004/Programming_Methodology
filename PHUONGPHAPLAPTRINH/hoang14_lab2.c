#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,c,sum=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(c=1;c<=(a-1);c++)
	{
		b=a%c;
		if(b==0)
		{
			sum+=c;
		}
	}
	if(sum==a)
	{
		printf("This is the Perfect number: %d",a);
	}
	else
	{
		printf("This is not the Perfect number: %d",a);
	}
	return 0;
}