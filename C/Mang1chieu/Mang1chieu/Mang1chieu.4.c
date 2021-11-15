#include <stdio.h>
#define MAX_SIZE 20

int main()
{
	int n;
	int A[MAX_SIZE], B[MAX_SIZE], C[MAX_SIZE];
	do
	{
		printf("\nNhap so luong phan tu mang:");
		scanf_s("%d", &n);
	} while (n <= 0 || n > MAX_SIZE);
	printf("\nNhap mang A co %d phan tu \n", n);
	for (int i = 0; i < n; i++)
	{
		printf("A[%d]=", i);
		scanf_s("%d", &A[i]);
	}
	printf("\nNhap mang B co %d phan tu \n", n);
	for (int i = 0; i < n; i++)
	{
		printf("B[%d]=", i);
		scanf_s("%d", &B[i]);
	}
	printf("\nCac phan tu mang ket qua C la \n");
	for (int i = 0; i < n; i++)
	{
		C[i] = A[i] + B[i];
		printf("\nC[%d]=%d", i,C[i]);
	}
}

	