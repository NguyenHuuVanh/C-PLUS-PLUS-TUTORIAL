#include <stdio.h>
#define MAXSIZE 20

void nhapmang(int arr[], int n)
{
	for (int  i = 0; i < n; i++)
	{
		printf("Nhap gia tri a[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}

void xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=%d\n", i,arr[i]);
	}
}

int Maxindex(int arr[], int n)
{
	int maxofindex = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxofindex)
		{
			maxofindex = arr[i];
		}
	}
	return maxofindex;
}

void  Position(int arr[], int n)
{
	int maxofindex = Maxindex(arr, n);
	printf("vi tri cua phan tu lon nhat:");
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == maxofindex)
			{
				printf("%d\n", i + 1);
			}
		}
		return maxofindex;
}

int main() {
	int arr[MAXSIZE];
	int n;
	printf("Nhap so luong phan tu:");
	scanf_s("%d", &n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	Position(arr, n);
}