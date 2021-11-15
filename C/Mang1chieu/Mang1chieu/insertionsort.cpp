#include <stdio.h>
#include <math.h>

void nhapmang(int arr[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("\nNhap gia tri arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}
void xuatmang(int arr[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
}
void insertionsort(int arr[], int n)
{
	int key, j;
	for (int i = 1; i <= n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (key<arr[j]&&j>=0)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;	
	}
}

void PrintArray(int arr[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		printf("%5d", arr[i]);
	}
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
		insertionsort(arr, n);
		printf("\nSau khi sap xep:");
		PrintArray(arr, n);
	}
	return 0;	
}