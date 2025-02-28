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
int xuatmang(int b[], int max)
{
	int i;
	for(i = 0; i <= max; i++)
	{
		if(b[i] > 0)
			printf("The number %d appears %d times.\n", i, b[i]);
	}
}
int duplicate(int a[], int size)
{
	int i, b[100000] = {0}, max = a[0];
	for(i = 0; i < size; i++)
	{
		b[a[i]]++;
		if(max < a[i])
			max = a[i];
	}
	xuatmang(b, max);
}
int main()
{
	int a[100], n;
	printf("Enter an array: ");
	scanf("%d", &n);
	docmang(a, n);
	printf("After solved\n");
	duplicate(a, n);
	return 0;
}