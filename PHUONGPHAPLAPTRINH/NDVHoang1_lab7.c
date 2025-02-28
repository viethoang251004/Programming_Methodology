#include <stdio.h>
#define Max 100
void nhapmang(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
int search(int a[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
			return i;
	}
	return -1;
}
int main()
{
	int n, a[Max], key;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	nhapmang(a, n);
	printf("Nhap so can tim: ");
	scanf("%d", &key);
	if (search(a, n, key) == -1)
		printf("Khong tim thay so can tim");
	else
		printf("So can tim nam o phan tu %d cua mang", search (a, n, key));
	return 0;
}