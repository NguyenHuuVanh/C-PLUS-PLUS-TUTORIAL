#include <stdio.h>
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

int minnumber(int arr[], int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
        }
	}
	return min;
}

int main()
{
	int n;
	int arr[MAX];
	printf("\nNhap n:");
	scanf_s("%d", &n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	printf("\nSo nho nhat la:%d",minnumber(arr, n));
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == minnumber(arr, n))
		{
			printf("\nVi tri so nho nhat la: %d", i + 1);
		}
	}
}