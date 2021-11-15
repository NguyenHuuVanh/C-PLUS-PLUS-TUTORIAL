#include <stdio.h>

#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE];
	int n;
	do
	{
		printf("\nNhap n:");
		scanf_s("%d", &n);
	} while (n <= 0||n > MAX_SIZE);
		
	for ( int i = 0; i < n; i++)
	{
		printf("\nNhap arr[%d]=",i);
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
}