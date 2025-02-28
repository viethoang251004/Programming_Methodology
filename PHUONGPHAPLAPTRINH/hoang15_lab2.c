#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,dem,num;
	printf("Enter a number: ");
	scanf("%d",&b);
	printf("Print all Prime numbers from 1 to %d: ",b);
	for(num=1;num<=b;num++)
	{
		dem=0;
		for(a=2;a<=num/2;a++)
		{
			if(num%a==0)
			{
				dem++;
				break;
			}
		}
		if(dem==0 && num!=1)
		printf("%d ",num);
	}
	return 0;
}