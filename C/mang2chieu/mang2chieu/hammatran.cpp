#include <stdio.h>

void nhapmatran(int arr[][10], int m, int n)
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

void xuatmatran(int arr[][10], int m, int n)
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

int tongphantuhangchan(int arr[][10], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i+=2)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int max(int arr[][10], int m, int n)
{
	int max = arr[0][0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i][0])
		{
			max = arr[i][0];
        }
	}
	return max;
}

int main()
{
	int arr[10][10];
	int i, j, m, n;
	printf("\nNhap so hang n:"); scanf_s("%d", &n);
	printf("\nNhap so cot m:"); scanf_s("%d", &m);
	nhapmatran(arr, m, n);
	xuatmatran(arr, m, n);
	printf("\nTong cac phan tu tren hang chan cua ma tran=%d",tongphantuhangchan(arr, m, n));
	printf("\nMax cua cot 1 la %d", max(arr, m, n));
}