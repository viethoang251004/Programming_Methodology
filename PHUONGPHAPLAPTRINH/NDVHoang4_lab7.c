#include <stdio.h>
#define Max 100
void bubblesort(int a[], int n)
{
	int i, limit, temp;
	for (limit = n - 2; limit >= 0; limit--)
	{
		for (i = 0; i <= limit; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
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
	bubblesort(a, n);
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