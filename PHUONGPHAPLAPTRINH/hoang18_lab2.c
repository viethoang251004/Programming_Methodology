#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a[10],i,x,y;
	printf("Enter a Decimal number: ");
	scanf("%d",&x);
	for(i=0;x>0;i++)
	{
		a[i]=x%2;
		x=x/2;
	}
	printf("A Binary number is converted: ");
	for(y=i-1;y>=0;y--)
	{
		printf("%d",a[y]);
	}
	return 0;
}