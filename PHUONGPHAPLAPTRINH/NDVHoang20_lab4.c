#include <stdio.h>

void  nhapA( int a[][100], int n, int m)
{
	int i,j;

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("a[%d][%d]= ", i,j);
			
			scanf("%d", &a[i][j]);
		}
	}
}

void  xuatA( int a[][100], int n, int m)
{
	int i,j;

	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void  change( int a[][100], int m, int n)
{
	
	printf("Ma tran sau khi hoan vi: \n");
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			printf("%5d", a[j][i]);
		}
		printf("\n");
	}
}

int main()
{
	int n, m, a[100][100];
	
	printf("\nNhap so dong: ");

	scanf("%d", &n);

	printf("\nNhap so cot: ");

	scanf("%d", &m);
	
	printf("\nNhap vao ma tran A: \n");
	
	nhapA(a, n, m);
	
	printf("\nMa tran A sau khi nhap: \n");
	
	xuatA(a, n, m);
	
	change(a, m, n);
}