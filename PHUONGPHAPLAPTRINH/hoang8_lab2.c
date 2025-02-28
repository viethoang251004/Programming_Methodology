#include <stdio.h>
int main()
{
	int num,count;
	printf("Enter any number: ");
	scanf("%d",&num);
	do
	{
		count++;
		num/=10;
	}
	while(num!=0);
	printf("Total digits of the number: %d",count);
}