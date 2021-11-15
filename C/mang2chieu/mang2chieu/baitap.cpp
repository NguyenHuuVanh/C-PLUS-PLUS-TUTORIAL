#include <stdio.h>

void nhapmatran(int arr[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("\narr[%d][%d]=", i, j);
			scanf_s("%d", &arr[i][j]);
		}
	}
}

void xuatmatran(int arr[][50], int m, int n)
{
	printf("\nMa tran vua nhap la:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

void sapxep(int arr[][50], int m, int n)
{
	int tg, k;
	for (int j = 0; j < m - 1; j++)
	{
		for (k = j + 1; k < m; k++)
		{
			if (arr[1][j] < arr[1][k])
			{
				tg = arr[1][j];
				arr[1][j] = arr[1][k];
				arr[1][j] = tg;
			}
		}
	}
}

void in(int arr[][50], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d", arr[1][j]);
		}
	}
}

int tongcacphantu(int arr[][50], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int MAX(int arr[][50], int m, int n)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

int minchiahet3(int arr[][50], int m, int n)
{
	int min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (min > arr[i][j] && arr[i][j] % 3 == 0 && arr[i][j] > 0)
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

int main()
{
	int arr[50][50];
	int i, j, m, n;
	printf("\nNhap so hang n:"); scanf_s("%d", &n);
	printf("\nNhap so cot m:"); scanf_s("%d", &m);
	nhapmatran(arr, m, n);
	xuatmatran(arr, m, n);
	printf("\nma tran vua sap xep hang 2 la\n");
	sapxep(arr, m, n);
	in(arr, m, n);
	printf("\nTong cac phan tu trong ma tran la %d", tongcacphantu(arr, m, n));
	printf("\nMax cua ma tran la %d", MAX(arr, m, n));
	printf("\nMin chia het cho 3 trong ma tran la %d", minchiahet3(arr, m, n));
}