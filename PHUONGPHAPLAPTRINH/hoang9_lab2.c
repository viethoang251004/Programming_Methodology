#include <stdio.h>
#include <math.h>
int main()
{
	int x,first,last,y,s;
	printf("Enter any number: ");
	scanf("%d",&x);
	last=x%10;
	y=(int)log10(x);
	first=(int)(x/pow(10,y));
	s=last;
	s*=(int)round(pow(10,y));
	s+=x%((int)round(pow(10,y)));
	s-=last;
	s+=first;
	printf("Number after swapping first and last digits: %d",s);
}