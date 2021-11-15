#include <stdio.h>
#include <math.h>

void nhapmatran(int arr[][50], int m, int n)
{
	for (int i = 0; i < n; i++)
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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

int kiemtra(int n)
{
	int count = 0;
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0) 
{
		return 1;
	}
	else {
		return 0;
	}
}

void SNT(int arr[][50], int m, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (kiemtra(arr[i][j]) == 1)
			{
				printf("\n%d la SNT!",arr[i][j]);
			}
			else printf("\n%d khong la SNT!", arr[i][j]);
		}
	}
}


int main()
{
	int arr[50][50];
	int i, j, m, n;
	printf("\nNhap so hang n:"); scanf_s("%d", &n);
	printf("\nNhap so cot m:"); scanf_s("%d", &m);
	nhapmatran(arr, m, n);
	xuatmatran(arr, m, n);
	kiemtra(n);
	SNT(arr, m, n);
}