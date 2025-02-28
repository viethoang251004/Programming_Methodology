#include <stdio.h>
int main()
{
	int n, h, m, s, temp;
	printf("Nhap n: ");
	scanf("%d", &n);
	h = n / 3600;
	temp = n - h * 3600;
	m = temp / 60;
	s = temp - m * 60;
	printf("%d gio %d phut %d giay", h, m, s);
}
