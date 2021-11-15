#include <stdio.h>

void nhapmatran(int arr[][100], int m, int n)
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

void xuatmatran(int arr[][100], int m, int n)
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

int MAX(int arr[][100], int m, int n)
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

int MIN(int arr[][100], int m, int n)
{
	int min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

int main()
{
	int arr[100][100];
	int i, j, m, n;
	printf("\nNhap so hang n:"); scanf_s("%d", &n);
	printf("\nNhap so cot m:"); scanf_s("%d", &m);
	nhapmatran(arr, m, n);
	xuatmatran(arr, m, n);
	printf("\nGia tri lon nhat cua ma tran la %d", MAX(arr, m, n));
	printf("\nGia tri nho nhat cua ma tran la %d", MIN(arr, m, n));
}