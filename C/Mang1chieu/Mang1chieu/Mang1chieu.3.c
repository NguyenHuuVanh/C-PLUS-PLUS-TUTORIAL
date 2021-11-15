#include <stdio.h>
#define MAX_SIZE 20

int main()
{
	int n;
	int arr[MAX_SIZE];
	do
	{
		printf("\nNhap so luong phan tu mang:");
		scanf_s("%d", &n);
	} while (n <= 0 || n > MAX_SIZE);
	printf("\nNhap mang co %d phan tu \n", n);
	for (int i = 0; i < n; i++)
	{
		printf("arr[%d]=",i);
		scanf_s("%d", &arr[i]);
	}
	printf("\nCac phan tu mang theo thu tu xuoi la: \n");
	for (int i = 0; i < n; i++)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
	printf("\nCac phan tu mang theo thu tu nguoc la: \n");
	for (int i = n-1; i >=0; i--)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
}