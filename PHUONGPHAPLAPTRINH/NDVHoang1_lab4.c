#include <stdio.h>
int giaithua(int n)
{
	int i, sum = 1;
	for(i = 1; i <= n; i++)
		sum *= i;
	return sum;
}
float a(int n)
{
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++)
		sum += (i / (2 * 1.0));
	return sum;
}
float b(int n)
{
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++)
		sum += 2 * i + 1;
	return sum;
}
float c(int n)
{
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++)
		sum += giaithua(i) + 1;
	return sum;
}
float d(int n)
{
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++)
		sum *= giaithua(i);
	return sum;
}
float e(int n)
{
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++)
		sum *= (2 * i) / 3.0;
	return sum;
}
int main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("Cau a = %.2f\n", a(x));
	printf("Cau b = %.21f\n", b(x));
	printf("Cau c = %.21f\n", c(x));
	printf("Cau d = %.21f\n", d(x));
	printf("Cau e = %.2f\n", e(x));
}