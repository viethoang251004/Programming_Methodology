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
void reverse(int a[], int size)
{
	int i, n = size - 1, tempt;
	for(i = 0; i <= (size - 1) / 2; i++)
	{
		tempt = a[i];
		a[i] = a[n];
		a[n] = tempt;
		n--;
	}
}
void xuatmang(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("A[%d] = %d\n", i, a[i]);
}
int main()
{
	int a[100], n;
	printf("Nhap do dai mang: ");
	scanf("%d", &n);
	docmang(a,n);
	reverse(a,n);
	printf("Reverse an array without using any temporary array\n");
	xuatmang(a,n);
	return 0;
}