#include <stdio.h>
#define Max 100
void sort(int a[], int n)
{
	int i, j, min_index, temp;
	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_index])
				min_index = j;
		}
		temp = a[i];
		a[i] = a[min_index];
		a[min_index] = temp;
	}
}
void nhapmang(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	sort(a, n);
	printf("\nMang sau khi da sap xep ");
	for (int i = 0; i <= n - 1; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}
}
int main()
{
	int n, a[Max];
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	nhapmang(a, n);
	xuatmang(a, n);
	return 0;
}