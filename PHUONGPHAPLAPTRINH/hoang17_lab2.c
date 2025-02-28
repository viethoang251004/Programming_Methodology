#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int num,sum,a,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num<1)
	{
		printf("Not available, please input another number: ");
		scanf("%d",&num);
	}
	printf("The Perfect numbers between 1 and %d: ",num);
	for(i=1;i<=num;i++)
	{
		sum=0;
		for(a=1;a<i;a++)
		{
			if(i%a==0)
			{
				sum+=a;
			}
		}
		if(i==sum)
		{
			printf("%d ",i);
		}
	}
	return 0;
}