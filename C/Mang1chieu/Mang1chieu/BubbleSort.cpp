#include <stdio.h>

void nhapmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap gia tri arr[%d]= ", i+1	);
		scanf_s("%d", &arr[i]);
	}
}

void bubblesort(int arr[], int n)
{
	int tg;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = n - 1; j > i; j--)
			if (arr[j] < arr[j - 1])
			{
				tg = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tg;
			}
	}
}

void xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n\nGia tri cua arr[%d]=%d", i, arr[i]);
	}
}

void PrintNumber(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
}
int main()
{
	int arr[20];
	int n;
	printf("\nNhap n:");
	scanf_s("%d", &n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	bubblesort(arr, n);
	printf("\n\nGia tri sau khi sap xep la:");
	PrintNumber(arr, n);
	return 0;
}