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
		printf("\narr[%d]=%d", i, arr[i]);
	}
}

void bubblesort(int arr[], int n)
{
	int tg;
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				tg = arr[j];
				arr[j ] = arr[j-1];
				arr[j-1] = tg;

			}
		}
	}
}

void in(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
}

int sumofnum(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void tbc(int arr[], int n)
{
	{
		printf("\nTrung binh cong =%f", (sumofnum(arr, n) / (float)n));
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
	bubblesort(arr, n);
	printf("\nsau khi sap xep la:");
	in(arr, n);
	printf("\nTong =%d", sumofnum(arr, n));
	tbc(arr, n);
}