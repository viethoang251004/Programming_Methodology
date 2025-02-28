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
int delete(int a[], int size, int del)
{
	int i, sum = 0;
	for(i = del; i <= size; i++)
		a[i] = a[i + 1];
	return size - 1;
}
int duplicate(int a[], int size)
{
	int i, b[10000] = {0};
	for(i = 0; i < size; i++)
	{
		b[a[i]]++;
		if(b[a[i]] > 1)
			{
				size = delete(a,size,i);
				i--;
				b[a[i]] = 1;
			}
	}
	return size;
}
void xuatmang(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("a[%d] = %d\n", i, a[i]);
}
int main()
{
	int a[100], n;
	printf("Enter an array: ");
	scanf("%d", &n);
	docmang(a, n);
	n = duplicate(a, n);
	printf("After solved: \n");
	xuatmang(a, n);
	return 0;
}