#include <stdio.h>
#define MAX 100

void nhapmang(int arr[4][4], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("\nNhap arr[%d][%d]=", i, j);
			scanf_s("%d",& arr[i][j]);
		}
	}
}

void xuatmang(int arr[4][4], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[4][4];
	int m, n;
	printf("\nNhap so hang va so cot:");
	scanf_s("%d%d", &m, &n);
	nhapmang(arr, m, n);
	xuatmang(arr, m, n);
}