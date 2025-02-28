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
int binsearch(int a[], int low, int high, int key, int n)
{
	sort(a, n);
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == key)
			return mid;
		if (a[mid] > key)
			return binsearch(a, low, mid - 1, key, n);
		else
			return binsearch(a, mid + 1, high, key, n);
	}
	else return -1;
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
	printf("\nMang sau khi da sap xep");
	for (int i = 0; i <= n - 1; i++)
	{
		printf("A[%d] = %d\n", i, a[i]);
	}
}
int main()
{
	int n, low = 0, high, key, a[Max];
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	high = n - 1;
	nhapmang(a, n);
	xuatmang(a, n);
	printf("Nhap so can tim: ");
	scanf("%d", &key);
	if (binsearch(a, low, high, key, n) == - 1)
		printf("Khong tim thay so can tim.");
	else
		printf("So can tim o phan tu thu %d cua mang", binsearch(a, low, high, key, n));
	return 0;
}