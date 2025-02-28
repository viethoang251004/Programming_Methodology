#include<stdio.h>
void cong(int x,int y)
{
     int z;
     z=x+y;
     printf("tong : %d\n",z);
}
void diff(int x,int y)
{
     int z;
     z=x-y;
     printf("Difference : %d\n",z);
}
void mult(int x,int y)
{
     int z;
     z=x*y;
     printf("Product : %d\n",z);
}
void div(int x,int y)
{
     float z;
     z=x/(float)y;
     printf("Division : %.2f\n",z);
}
int main()
{
     int a,b;
     printf("Enter Two Numbers\n");
     printf("---------------------------\n");
     printf("Enter First Number  : ");
     scanf("%d", &a);
     printf("\nEnter Second Number : ");
     scanf("%d",&b);
     printf("---------------------------\n");
     cong(a,b);
     diff(a,b);
     mult(a,b);
     div(a,b);
     return 0;
}


