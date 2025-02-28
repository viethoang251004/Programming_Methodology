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
void sapxepmang(int a[], int size)
{
	int i, j, tempt;
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		if(a[i] > a[j])
		{
			tempt = a[i];
			a[i] = a[j];
			a[j] = tempt;
		}
	}
}
void xuatmang(int a[], int size)
{
	int i;
	printf("After solved: \n");
	for(i = 0; i < size; i++)
		printf("[%d] = %d\n", i, a[i]);
}
int main()
{
	int n;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &n);
	docmang(a,n);
	sapxepmang(a,n);
	xuatmang(a,n);
}