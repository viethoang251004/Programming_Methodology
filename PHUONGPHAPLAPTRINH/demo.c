// #include <stdio.h>
// int main()
// {
// 	int m, h, tongtien;
// 	printf("Nhap so gio lam viec: ");

// 	scanf("%d", &h);

// 	printf("Nhap gio cong tieu chuan: ");

// 	scanf("%d", &m);

// 	tongtien = m * h;

// 	if (h > 40 & h <= 45)
// 	{
// 		tongtien = m * h * 1.8;
// 	}

// 	if (h > 45 & h <= 50)
// 	{
// 		tongtien = m * h * 2.5;
// 	}

// 	if (h > 50)
// 	{
// 		tongtien = m * h * 2.6;
// 	}

// 	printf("Tong so tien nhan vien thu thap duoc trong tuan la: %d", tongtien);

// 	return 0;
// }

#include <stdio.h>
#define PI 3.1415926535
#include <math.h>
#include <string.h>

int n, dc, dg, ld;
char w[10];

void getInput()
{

	FILE *f;
	f = fopen("input.inp", "r");
	fscanf(f, "%d %d %d %d %s", &n, &dc, &dg, &ld, w);
	fclose(f);
}
void getOutput(int bc, int bg, float nd)
{
	FILE *f;
	f = fopen("output.out", "w");
	fprintf(f, "%d %d %0.3f", bc, bg, nd);
	fclose(f);
}
// nbc : so nep can nau 1 banh chung
// nbg  : so nep can nau 1 banh giay

int testnbc(int dc)
{
	int nbc;
	nbc = dc * dc;
	return nbc;
}

float testnbg(int dg)
{
	float nbg;
	nbg = (pow(dg, 2) * PI) / 4;
	return nbg;
}

int sumn(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum = sum + i;
	}
	return sum;
}
int sumld(int ld)
{
	int sum1 = 0;
	for (int i = 1; i < ld; i++)
	{
		if (ld % i == 0)
			sum1 = sum1 + i;
	}
	return sum1;
}

char w[10];
float nd, n1;
///////////////////////// Ham chinh
int main()
{
	getInput();
	int bc, bg, nbc, sum, sum1;
	float nbg;

	nbc = testnbc(dc);
	nbg = testnbg(dg);

	char a[] = "Wind";
	char b[] = "Rain";
	char c[] = "Sun";
	char d[] = "Cloud";

	if (n > 1000 || n < 0 || ld < 0 || ld > 300)
	{
		FILE *f;
		f = fopen("output.out", "w");
		fprintf(f, "-1 -1 %d", n);
		printf("%d", n);
		fclose(f);
		return 0;
	}

	if (dc == 0 && dg == 0 || dc < 0 && dg == 0 || dg < 0 && dc == 0)
	{
		FILE *f;
		f = fopen("output.out", "w");
		fprintf(f, "0 0 %d", n);
		printf("%d", n);
		fclose(f);
		return 0;
	}

	//////////////////////SUN
	if (strcmp(w, c) == 0)
	{
		printf("n = %d, dc = %d, dg = %d, ld = %d\n", n, dc, dg, ld);
		int laydu;
		int x;
		int g = dc % 6;
		int h = ld % 5;
		if (g == h)
			x = 5;
		else if (g == h + 1)
			x = 7;
		else if (g == h + 2 || h == g + 4)
			x = 10;
		else if (g == h + 3 || h == g + 3)
			x = 12;
		else if (g == h + 4 || h == g + 2)
			x = 15;
		else if (g == h + 5 || h == g + 1)
			x = 20;
		n = n + n * x / 100;
		printf("n=%d\n ", n);
		ld = ld - x;
		printf("ld=%d\n", ld);
		if (ld < 0)
		{
			ld = 0;
		}

		laydu = (dc + dg) % 3;
		printf("laydu=%d ", laydu);
		if (laydu == 0)
			goto L1;
		else if (laydu == 1)
			goto L2;
		else
			goto L3;
	}

	////////////////////////////////Wind
	int nc;
	float ng, n1;
	if (strcmp(w, a) == 0)
	{
		float nd1, nd2;
	L2:;
		bc = n / nbc;
		bg = (n - (bc * nbc)) / nbg;
		nd = n - (bc * nbc + bg * nbg);

		if (ld < bc + bg && nbc > nbg)
		{
			bc = n / nbc;
			bg = (ld - bc);
			nd = n - (bc * nbc + bg * nbg);
			if (bg < 0)
			{
				bg = 0;
				bc = ld;
				nd = n - (bc * nbc + bg * nbg);
			}
			if (nd < 0)
			{
				bc = n / nbc;
				bg = (n - (nbc * bc)) / nbg;
				nd = n - (bc * nbc + bg * nbg);
			}
		}

		if (ld < bc + bg && nbg > nbc)
		{
			bg = n / nbg;
			bc = ld - bg;
			nd = n - (bc * nbc + bg * nbg);
			if (bc < 0)
			{
				bc = 0;
				bg = ld;
				nd = n - (bc * nbc + bg * nbg);
			}
			if (nd < 0)
			{
				bg = n / nbg;
				bc = (n - (nbg * bg)) / nbc;
				nd = n - (bc * nbc + bg * nbg);
			}
		}
		if (dc < 0)
		{
			bg = n / nbg;
			bc = 0;
			nd = n - (nbg * bg);
		}
		else if (dg < 0)
		{
			bc = n / nbc;
			bg = 0;
			nd = n - (nbc * bc);
		}
	}

	/////////////////////////////Rain

	else if (strcmp(b, w) == 0)
	{
	L1:;

		float ng, n1, nd1, nd2;
		int nc;
		scanf("%d %d %d %d", &n, &dc, &dg, &ld);
		nbc = dc * dc;
		nbg = 0.25 * dg * dg * PI;
		printf("nbc=%d\n", nbc);
		printf("nbg=%f\n", nbg);

		bc = n / (nbc + nbg);
		bg = n / (nbc + nbg);
		nc = nbc * bc;
		printf("nc=%d\n", nc);
		ng = nbg * bg;
		printf("ng=%f\n", ng);
		n1 = n - (nc + ng); // so nep con du khi nau bc bg
		printf("n1=%f\n", n1);
		nd = n - (nbc * bc + nbg * bg);

		if (nbg >= nbc)
		{
			if (1 <= (nd / nbg))
			{
				bg = bg + n1 / nbg;

				// lam them bc
				nd = n - (nbc * bc + nbg * bg);
			}
			if ((nd / nbc) >= 1)
			{
				bc = bc + n1 / nbc; // lam them bg
				nd = n - (nbc * bc + nbg * bg);
			}
			if ((n1 / nbg) < 1 && (n1 / nbc) < 1 && (bc + bg > ld))
			{
				bc = ld / 2;
				bg = ld - bc;
				nd = n - (nbc * bc + nbg * bg);
			}
		}
		else
		{
			if ((nd / nbc) >= 1)
			{
				bc = bc + n1 / nbc; // lam them bg
				nd = n - (nbc * bc + nbg * bg);
			}
			if (1 <= (nd / nbg))
			{
				bg = bg + n1 / nbg;

				// lam them bc
				nd = n - (nbc * bc + nbg * bg);
			}
			if (((n1 / nbg) < 1) && ((n1 / nbc) < 1) && (bc + bg > ld))
			{
				bg = ld / 2;
				bc = ld - bc;
				nd = n - (nbc * bc + nbg * bg);
			}
		}
		/// La dong thieu Rain
		if (bc + bg > ld)
		{

			n1 = n - (nc + ng);
			nd = n - (nbc * bc + nbg * bg);
			if (nbg >= nbc)
			{
				while (bc + bg > ld && bc >= 0 && bg > 0)
				{
					--bg;
				}
				while (bc + bg > ld && bc > 0 && bg >= 0)
				{
					--bc;
				}
			}
			else
			{
				while (bc + bg > ld && bc > 0 && bg >= 0)
				{
					--bc;
				}
				while (bc + bg > ld && bc >= 0 && bg > 0)
				{
					--bg;
				}
			}
			nd = n - (nbc * bc + nbg * bg);
		}
		printf("%d %d %.3f", bc, bg, nd);
		if (dc < 0)
		{
			bg = n / nbg;
			bc = 0;
			nd = n - (nbg * bg);
		}
		else if (dg < 0)
		{
			bc = n / nbc;
			bg = 0;
			nd = n - (nbc * bc);
		}
	}

	///////////////////////////////////////////////Loud
	else if (strcmp(d, w) == 0)
	{
	L3:;

		if (sumn(n) == ld && sumld(ld) == n)
		{
			bc = 0;
			bg = 0;
			nd = n * 1.0;
		}

		else
		{
			bg = n / nbg;
			bc = (n - (bg * nbg)) / nbc;
			nd = n - (bc * nbc + bg * nbg);
			if (ld < bc + bg && nbc > nbg)
			{
				bc = n / nbc;
				bg = (ld - bc);
				nd = n - (bc * nbc + bg * nbg);
				if (bg < 0)
				{
					bg = 0;
					bc = ld;
					nd = n - (bc * nbc + bg * nbg);
				}
				if (nd < 0)
				{
					bc = n / nbc;
					bg = (n - (nbc * bc)) / nbg;
					nd = n - (bc * nbc + bg * nbg);
				}
			}

			if (ld < bc + bg && nbg > nbc)
			{
				bg = n / nbg;
				bc = ld - bg;
				nd = n - (bc * nbc + bg * nbg);
				if (bc < 0)
				{
					bc = 0;
					bg = ld;
					nd = n - (bc * nbc + bg * nbg);
				}
				if (nd < 0)
				{
					bg = n / nbg;
					bc = (n - (nbg * bg)) / nbc;
					nd = n - (bc * nbc + bg * nbg);
				}
			}
		}

		if (dc < 0)
		{
			bg = n / nbg;
			bc = 0;
			nd = n - (nbg * bg);
		}
		else if (dg < 0)
		{
			bc = n / nbc;
			bg = 0;
			nd = n - (nbc * bc);
		}
	}
	getOutput(bc, bg, nd);
}