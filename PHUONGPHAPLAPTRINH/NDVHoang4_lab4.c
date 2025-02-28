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
int sum(int a[], int size)
{
	int i, sum = 0;
	for(i = 0; i < size; i++)
		sum += a[i];
	return sum;
}
int main()
{
	int a[100], n;
	printf("Nhap do dai mang: ");
	scanf("%d", &n);
	docmang(a,n);
	printf("Sum = %d", sum(a,n));
	return 0;
}