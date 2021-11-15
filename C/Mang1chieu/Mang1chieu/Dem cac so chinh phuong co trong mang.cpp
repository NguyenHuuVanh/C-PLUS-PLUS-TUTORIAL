#include <stdio.h>
#include <math.h>
#define MAX 100

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
		printf("\narr[%d]=%d", i, arr[i]);
	}
}

int Sochinhphuong(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == pow(sqrt(arr[i]),2))
		{
			printf("\n%d la so chinh phuong", arr[i]);
		}
	}
	return 0;
}

int dem(int arr[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == pow(sqrt(arr[i]), 2))
		{
			++count;
		}
	}
	return count;
}

int main()
{
	int n;
	int arr[MAX];
	printf("\nNhap n:");
	scanf_s("%d", &n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	Sochinhphuong(arr, n);
	printf("\n co %d so chinh phuong trong mang", dem(arr, n));
}