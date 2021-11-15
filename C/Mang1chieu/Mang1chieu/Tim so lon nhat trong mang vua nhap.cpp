#include <stdio.h>
#include <math.h>

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
	for (int i =0 ; i < n; i++)
	{
		printf("\narr[%d]=%d", i, arr[i]);
	}
}

void solonnhat(int arr[], int n)
{
	int maxNum = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] > maxNum) maxNum = arr[i];
	}
	printf("\nPhan tu lon nhat: %d", maxNum);
}

int main()
{
	int n;
	int arr[20];
	printf("\nNhap n:");
	scanf_s("%d", &n);
	if (n <= 0 || n > 20)
	{
		printf("\nNhap lai n!");
	}
	else
	{
		nhapmang(arr, n);
		xuatmang(arr, n);
		solonnhat(arr, n);
	}
}