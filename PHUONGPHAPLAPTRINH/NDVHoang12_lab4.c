#include <stdio.h>
int a[100], b[100], c[200];
void readarray1(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
}
void readarray2(int b[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("b[%d]= ", i);
		scanf("%d", &b[i]);
	}
}
int sumarray(int a[], int size1, int b[], int size2)
{
	int i;
	for(i = 0; i < (size1 + size2); i++)
		if(i < size1)
			c[i] = a[i];
		else
			c[i] = b[i - size1];
	return size1 + size2;
}
void outputarray(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("c[%d] = %d\n", i, a[i]);
}
int main()
{
	int x, y, z;
	printf("Enter an array A: ");
	scanf("%d", &x);
	readarray1(a, x);
	printf("Enter an array B: ");
	scanf("%d", &y);
	readarray2(b, y);
	z = sumarray(a, x, b, y);
	printf("After solved: \n");
	outputarray(c, z);
}