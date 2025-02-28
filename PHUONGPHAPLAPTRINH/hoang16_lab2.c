#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x,y,z,num,sum,end;
	printf("Enter a number: ");
	scanf("%d",&end);
	printf("The Armstrong numbers between 1 and %d: ",end);
	for(z=1;z<=end;z++)
	{
		sum=0;
		num=z;
		y=(int)log10(num)+1;
		while(num>0)
		{
			x=num%10;
			sum=sum+ceil(pow(x,y));
			num=num/10;
		}
		if(z==sum)
		{
			printf("%d ",z);
		}
	}
	return 0;
}