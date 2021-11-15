#include <stdio.h>
#include <math.h>
#define MAX 20

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

void swap(int &a,int &b)
{
	
	int temp = a;
	a = b;
	b = temp;
}

void Selectionsort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}

	}
}
int Solonthuhai(int arr[], int n)
{
	return arr[1];
}

void PrintArrayNumber(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%5d", arr[i]);
	}
}

int main()
{
	int n;
	int arr[MAX];
	do
	{
		printf("\nNhap n:");
		scanf_s("%d", &n);
	} while (n<=1||n>MAX);
	nhapmang(arr, n);
	xuatmang(arr, n);
	Selectionsort(arr, n);
	printf("\nSau khi sap xep:");
	PrintArrayNumber(arr, n);
	printf("\nSo lon thu hai la:%d", Solonthuhai(arr, n));
	
	return 0;
}