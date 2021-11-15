#include <stdio.h>
#include <math.h>

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

void kiemtra(int arr[][100], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < 2004 && arr[i][j] % 2 == 0)
			{
				printf("%d la so chan nho nhon 2004!\n\n", arr[i][j]);
			}
			else printf("%d khong la so chan nho nhon 2004!\n\n", arr[i][j]);
		}
	}
}

int main()
{
	int arr[100][100];
	int i, j, m, n;
	printf("\nNhap so hang n:");
	scanf_s("%d", &n);
	printf("\nNhap so cot m:");
	scanf_s("%d", &m);
	nhapmatran(arr, m, n);
	xuatmatran(arr, m, n);
	kiemtra(arr, m, n);
}