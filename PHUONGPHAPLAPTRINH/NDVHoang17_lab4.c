#include <stdio.h>

void  nhapA( int a[][100], int n, int m)
{
	int i,j;

	for(int i=0; i<n; i++)
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

	for(int i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void  nhapB( int b[][100], int n, int m)
{
	int i,j;

	for(int i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("b[%d][%d]= ", i,j);
			
			scanf("%d", &b[i][j]);
		}
	}
}

void  xuatB( int b[][100], int n, int m)
{
	int i,j;

	for(int i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%5d ", b[i][j]);
		}
		printf("\n");
	}
}

void  hieu( int a[][100], int b[][100], int n, int m)
{
	int i,j, c[100][100];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m;j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}

	printf("Hieu cua hai ma tran la: \n");
	
	for(int i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int n, m, a[100][100], b[100][100];
	
	printf("\nNhap so dong: ");

	scanf("%d", &n);

	printf("\nNhap so cot: ");

	scanf("%d", &m);
	
	printf("\nNhap vao ma tran A: \n");
	
	nhapA(a, n, m);
	
	printf("\nMa tran A sau khi nhap: \n");
	
	xuatA(a, n, m);
	
	printf("\nNhap vao ma tran B: \n");
	
	nhapB(b, n, m);
	
	printf("\nMa tran B sau khi nhap: \n");
	
	xuatB(b, n, m);
	
	hieu(a, b, n, m);
}