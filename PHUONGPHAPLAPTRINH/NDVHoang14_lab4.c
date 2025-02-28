#include <stdio.h>
int a[100], check[2], chan[100], le[100];
void docmang(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
}
int search(int a[], int size, int value)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if (a[i] == value)
		{
			return printf("%d xuat hien o phan tu thu %d", value, i + 1);
		}
	}
	return printf("Khong tim thay %d trong mang.", value);
}
int main()
{
	int s, n;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	docmang(a,n);
	printf("Nhap gia tri muon tim: ");
	scanf("%d", &s);
	search(a,n,s);
}