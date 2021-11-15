#include <stdio.h>
#include <math.h>
#define MAX 50

void nhapmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap gia tri arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}

void xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
}

void kiemtra (int arr[], int n)
{
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 2; j <=sqrt(arr[j]); j++)
		{
			if (arr[i] % j == 0)
			{
				kt = 1;
			}
		}
		if (kt == 0)
		{
			printf("\nSo nguyen to %d co trong mang o vi tri %d", arr[i], i+1);
		}
	}
}

int main()
{
	int n;
	int arr[MAX];
	printf("\nNhap n:");
	scanf_s("%d", &n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	kiemtra(arr, n);
}