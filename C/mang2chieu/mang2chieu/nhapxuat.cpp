#include <stdio.h>

int main()
{
	int arr[50][50];
	int i, j, m, n;
	printf("\nNhap so hang n:"); scanf_s("%d", &n);
	printf("\nNhap so cot m:"); scanf_s("%d", &m);
	printf("\nNhap vaoma tran:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
	}
	printf("\nMa tran vua nhap la:\n");
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				printf("%5d",arr[i][j]);
			}
			printf("\n");
		}
}