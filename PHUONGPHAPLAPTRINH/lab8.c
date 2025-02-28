#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

typedef struct nhanvien
{
	int id;
	char name[SIZE];
	char sex[SIZE];	
	int birthyear;
	char phonenumber[SIZE];
	int salary;
}nv;

void nhap(nv nhanvien[SIZE], int n)
{
	int i, j;	

	for(i = 0; i < n; i++)
	{
		printf("\nNhan vien: %d\n", i+1);
		printf("ID: ");
		scanf("%d", &nhanvien[i].id);
		printf("Name: ");
		scanf("%s", &nhanvien[i].name);
		printf("Sex: ");
		scanf("%s", &nhanvien[i].sex);
		printf("Birthyear: ");
		scanf("%d", &nhanvien[i].birthyear);
		printf("Phone Number: ");
		scanf("%s", &nhanvien[i].phonenumber);
		printf("Salary: ");
		scanf("%d", &nhanvien[i].salary);
	}
}

void xuat(nv nhanvien [], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
	}
}

void find(nv nhanvien [], int n, int id)
{
	int i;
	for(i = 0; i < n; i++)
		if(id == nhanvien[i].id)
		{
			printf("\nNhan vien: %d\n", i+1);
			printf("Id: %d\n", nhanvien[i].id);
			printf("Name: %s\n", nhanvien[i].name);
			printf("Sex: %s\n", nhanvien[i].sex);
			printf("Birthyear: %d\n", nhanvien[i].birthyear);
			printf("Phone Number %s\n", nhanvien[i].phonenumber);
			printf("Salary: %d", nhanvien[i].salary);
		}
}

void count(nv nhanvien [], int n)
{
	int i, count1 = 0, count2 = 0;
	for(i = 0; i < n; i++)
	{
		if( strcmp( nhanvien[i].sex, "male") == 0)
			count1++;
		if( strcmp( nhanvien[i].sex, "female") == 0)
			count2++;
	}
	
		printf("MALE: %d", count1);
		printf("\nFEMALE: %d", count2);
}

void age(nv nhanvien [], int n)
{
	int i, j;
	nv temp1;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n ; j++)
		{
			if(nhanvien[i].birthyear > nhanvien[j].birthyear)
			{
				temp1 = nhanvien[i];
				nhanvien[i] = nhanvien[j];
				nhanvien[j] = temp1;
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
	}
}

void salary(nv nhanvien [], int n)
{
	int i, j;
	nv temp2;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n ; j++)
		{
			if(nhanvien[i].salary > nhanvien[j].salary)
			{
				temp2 = nhanvien[i];
				nhanvien[i] = nhanvien[j];
				nhanvien[j] = temp2;
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
	}
}

void maxsalary( nv nhanvien [], int n)
{
	int j,max = 0, i = 0;
	for(j = 0; j < n; j++)
	{
		if(max < nhanvien[j].salary)
		{
			max = nhanvien[j].salary;
			i = j;
		}
	}

		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
}

void young(nv nhanvien [], int n)
{
	int j, temp3 = nhanvien[0].birthyear, i = 0;
	{
		if(temp3 < nhanvien[j].birthyear)
		{
			temp3 = nhanvien[j].birthyear;
			i = j;
		}
	}

		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
}

void xoa(nv nhanvien [], int n, int del)
{
	int i, j;
	for(i = del; i < n; i++)
	{
		nhanvien[i] = nhanvien[i + 1];
	}
	
	for(i = 0; i < n; i++)
	{
		printf("\nNhan vien: %d\n", i+1);
		printf("Id: %d\n", nhanvien[i].id);
		printf("Name: %s\n", nhanvien[i].name);
		printf("Sex: %s\n", nhanvien[i].sex);
		printf("Birthyear: %d\n", nhanvien[i].birthyear);
		printf("Phone Number %s\n", nhanvien[i].phonenumber);
		printf("Salary: %d", nhanvien[i].salary);
	}
}

int main(void)
{
	int n, option, id, del;
	printf("Nhap vao so luong nhan vien: ");
	scanf("%d", &n);
	nv nhanvien[SIZE];		
		
	do
	{
		printf("\n\n-------------------- CHUONG TRINH NHAN VIEN --------------------\n\n");
		printf("\t+ Nhap 1 hoac 2: Nhap du lieu nhan vien\n");
		printf("\t+ Nhap 3: Xuat mang ra man hinh\n");
		printf("\t+ Nhap 4: Tim id\n");
		printf("\t+ Nhap 5: Dem male va female\n");
		printf("\t+ Nhap 6: Sap xep nam sinh\n");
		printf("\t+ Nhap 7: Sap xep luong\n");
		printf("\t+ Nhap 8: Tim luong lon nhat\n");
		printf("\t+ Nhap 9: Tim tuoi nho nhat\n");
		printf("\t+ Nhap 10: Xoa 1 nhan vien\n");
		printf("\t+ Nhap 11: Thoat chuong trinh\n");
		printf("\n\n-----------------------------------------------------------------\n\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &option);
		
		if(option == 1 || option == 2)
			nhap(nhanvien, n);
		if(option == 3)
			xuat(nhanvien, n);
		if(option == 4)
		{
			printf("Nhap vào ID can tim: ");
			scanf("%d", &id);
			find(nhanvien, n, id);
		}
		if(option == 5)
			count(nhanvien, n);
		if(option == 6)
			age(nhanvien, n);
		if(option == 7)
			salary(nhanvien, n);
		if(option == 8)
			maxsalary(nhanvien, n);
		if(option == 9)
			young(nhanvien, n);
		if(option == 10)
		{
			printf("Nhap nhan vien can xoa: ");
			scanf("%d", &del);
			del--;
			xoa(nhanvien, n, del);
		}
		if(option == 11)
		{
			printf("Ket thuc chuong trinh!!!");
		}
	}while(option <= 10 && option >= 1);
}