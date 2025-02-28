#include <stdio.h>
int main()
{
	int l,a,s=0;
	printf("Input upper limit: ");
	scanf("%d",&a);
	for (l=2; l<=a; l+=2)
	{
		s += l;
	}
	printf("Sum of all even number between 1 to %d = %d",a,s);
}