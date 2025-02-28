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
int min(int a[], int size)
{
	int i;
	int min = a[0];
	for(i = 1; i < size; i++)
		if (min < a[i])
			min = a[i];
	return min;
}
int main()
{
	int a[100], n;
	printf("Nhap do dai mang: ");
	scanf("%d", &n);
	docmang(a,n);
	printf("Min = %d", min(a,n));
	return 0;
}