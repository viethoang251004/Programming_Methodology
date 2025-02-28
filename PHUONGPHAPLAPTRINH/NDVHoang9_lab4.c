#include <stdio.h>
void docmang(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
int duplicate(int a[], int size)
{
	int i, b[10] = {0}, count = 0;
	for(i = 0; i < size; i++)
		b[a[i]]++;
	for(i = 0; i < 10; i++)
	{
		if(b[i] > 1)
			count += b[i];
	}
	return count;
}
int main()
{
	int a[100], n;
	printf("Enter an array: ");
	scanf("%d", &n);
	docmang(a,n);
	printf("Total number of duplicate elements = %d", duplicate(a,n));
	return 0;
}