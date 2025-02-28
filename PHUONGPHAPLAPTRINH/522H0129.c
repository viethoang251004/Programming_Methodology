#include <stdio.h>
#include <string.h>
#define pi 3.1415
int a[3], banh[2] = {0}, ladong[1] = {0}, b[5][6] = {5, 7, 10, 12, 15, 20, 20, 5, 7, 10, 12, 15, 15, 20, 5, 7, 10, 12, 12, 15, 20, 5, 7, 10, 10, 12, 15, 20, 5, 7};
int sumuoc(int a)
{
	int i, sum = 0;
	for (i = 1; i <= a / 2; i++)
		if (a % i == 0)
			sum += i;
	return sum;
}
int sobanbe(int a)
{
	if ((sumuoc(a) == ladong[0]) && (sumuoc(ladong[0]) == a))
		return 1;
	return 0;
}
double banhchung(double a, int b)
{
	ladong[0]--;
	banh[0]++;
	return a - b * b;
}
double banhgiay(double a, int b)
{
	ladong[0]--;
	banh[1]++;
	return a - (b * b * pi / 4);
}
double Wind(double gaonep, int canh, int duongkinh)
{
	while (((gaonep >= (canh * canh)) && (ladong[0] > 0)) && (canh > 0))
		gaonep = banhchung(gaonep, canh);
	while ((gaonep >= (duongkinh * duongkinh * pi / 4)) && (ladong[0] > 0) && (duongkinh > 0))
		gaonep = banhgiay(gaonep, duongkinh);
	return gaonep;
}
double Rain(double gaonep, int canh, int duongkinh)
{
	while ((((gaonep >= canh * canh) && (canh > 0)) || ((gaonep >= (duongkinh * duongkinh * pi / 4)) && (duongkinh > 0))) && (ladong[0] > 0))
	{
		if ((gaonep >= canh * canh) && (canh > 0))
			gaonep = banhchung(gaonep, canh);
		if ((gaonep >= (duongkinh * duongkinh * pi / 4)) && (duongkinh > 0))
			gaonep = banhgiay(gaonep, duongkinh);
	}
	return gaonep;
}
double Cloud(int gaonep, int canh, int duongkinh)
{
	double gaodu = gaonep;
	if (sobanbe(gaonep) == 1)
		return gaodu;
	while ((gaodu >= (duongkinh * duongkinh * pi / 4)) && (duongkinh > 0))
		gaodu = banhgiay(gaodu, duongkinh);
	while ((gaodu >= (canh * canh)) && (canh > 0))
		gaodu = banhchung(gaodu, canh);
	return gaodu;
}
double Sun(int gaonep, int canh, int duongkinh)
{
	int g = canh % 6, h = ladong[0] % 5;
	gaonep += (gaonep * b[h][g] / 100.0);
	ladong[0] -= b[h][g];
	if (((canh + duongkinh) % 3) == 0)
		return Rain(gaonep, canh, duongkinh);
	else if (((canh + duongkinh) % 3) == 1)
		return Wind(gaonep, canh, duongkinh);
	else
		return Cloud(gaonep, canh, duongkinh);
}
double Fog(double gaonep, int canh, int duongkinh)
{
	banh[0] = canh;
	banh[1] = duongkinh;
	return gaonep;
}
double gaodutheothoitiet(char thoitiet[])
{
	if (strcmp(thoitiet, "Wind") == 0)
		return Wind(a[0], a[1], a[2]);
	else if (strcmp(thoitiet, "Rain") == 0)
		return Rain(a[0], a[1], a[2]);
	else if (strcmp(thoitiet, "Sun") == 0)
		return Sun(a[0], a[1], a[2]);
	else if (strcmp(thoitiet, "Fog") == 0)
		return Fog(a[0], a[1], a[2]);
	else if (strcmp(thoitiet, "Cloud") == 0)
		return Cloud(a[0], a[1], a[2]);
}
int main()
{
	double gaodu;
	char thoitiet[4];
	FILE *finp, *fout;
	finp = fopen("input.inp", "r");
	fscanf(finp, "%d %d %d %d %s", &a[0], &a[1], &a[2], &ladong[0], &thoitiet);
	fclose(finp);
	gaodu = gaodutheothoitiet(thoitiet);
	fout = fopen("output.out", "w");
	if ((a[0] > 1000) || ((ladong[0] < 1) && (ladong[0] > 200)))
		fprintf(fout, "-1 -1 %d", a[0]);
	else if (((strcmp(thoitiet, "Cloud") == 0) && (sobanbe(a[0]) == 1)) || ((a[1]) < 0) && (a[2] < 0))
		fprintf(fout, "%.3f", gaodu);
	else if (a[1] < 0)
		fprintf(fout, "%d %.3f", banh[1], gaodu);
	else if (a[2] < 0)
		fprintf(fout, "%d %.3f", banh[0], gaodu);
	else
		fprintf(fout, "%d %d %.3f", banh[0], banh[1], gaodu);
	fclose(fout);
}