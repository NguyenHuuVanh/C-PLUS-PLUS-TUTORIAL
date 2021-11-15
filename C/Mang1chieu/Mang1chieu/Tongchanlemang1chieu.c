#include <stdio.h>
#define MAXSIZE 20

void Nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf_s("%d", &a[i]);
	}
}

void Xuatmang(int a[], int n)
{
	printf("Ket qua cua %d phan tu trong mang la:\n", n);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i,a[i]);
	}
}
/*
if (a[i] % 2 != 0)
{
	sum += a[i];
}*/

int SumOdd(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			sum += a[i];
		}
	}
	return sum;
}

int SumEven(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;
}

int main()
{
	int n;
	int arr[MAXSIZE];
	do
	{
		printf("Nhap so luong phan tu mang:");
		scanf_s("%d", &n);
	} while (n<=0||n>MAXSIZE);
	Nhapmang(arr, n);
	Xuatmang(arr, n);
	printf("Tong phan tu cac so chan la=%d\n",SumEven(arr,n));
	printf("Tong phan tu cac so le la=%d\n", SumOdd(arr, n));
}