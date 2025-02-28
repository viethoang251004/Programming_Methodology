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
int max(int a[], int size)
{
	int i;
	int max = a[0];
	for(i = 1; i < size; i++)
		if (max < a[i]) max = a[i];
	return max;
}
int main()
{
	int a[100], n;
	printf("Nhap do dai mang: ");
	scanf("%d", &n);
	docmang(a,n);
	printf("Max = %d", max(a,n));
	return 0;
}