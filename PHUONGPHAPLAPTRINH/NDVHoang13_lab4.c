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
void tachchanle(int a[], int size)
{
	int i, even = 0, odd = 0;
	for(i = 0; i < size; i++)
	{
		if(a[i] % 2 == 0)
		{
			chan[even] = a[i];
			even++;
		}
		else
		{
			le[odd] = a[i];
			odd++;
		}
		check[0] = even;
		check[1] = odd;
	}
}
void xuatmang(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("[%d] = %d\n", i, a[i]);
}
int main()
{
	int n;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	docmang(a,n);
	tachchanle(a,n);
	printf("Mang chan: \n");
	xuatmang(chan, check[0]);
	printf("Mang le: \n");
	xuatmang(le, check[1]);
}