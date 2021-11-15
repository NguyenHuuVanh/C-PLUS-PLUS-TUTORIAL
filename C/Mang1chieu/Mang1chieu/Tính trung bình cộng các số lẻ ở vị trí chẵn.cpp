/*
#include <stdio.h>
#include <math.h>

void nhapmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap arr[%d]", i);
		scanf_s("%d", &arr[i]);
	}
}

void xuatmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\narr[%d]=%d", i,arr[i]);
	}
}

int tinhtong(int arr[], int n)
{
	int sum = 0;
	int count = 0;
	for (int i = 1; i < n; i+=2)
	{
		if (arr[i] % 2 != 0)
		{
			++count;
			sum += arr[i];
        }
	}
 int tbc = float(sum) / count;
	return tbc;
}

int main()
{
	int n;
	int arr[20];
	printf("\nNhap n:");
	scanf_s("%d", &n);
	if (n <= 0 || n > 20)
	{
		printf("\nNhap lai n!");
	}
	else
	{
		nhapmang(arr, n);
		xuatmang(arr, n);
		printf("\nTong la=%d", tinhtong(arr, n));
	}
	return 0;
}
*/

#include <stdio.h>
#include <math.h> // Su dung ham sqrt
const int MAX = 100000;
int arr[MAX];

int main()
{
	int n;
	printf("\nNhap so luong phan tu n = ");
	scanf_s("%d", &n);

	// Nhap mang
	for (int i = 0; i < n; ++i) {
		printf("\nNhap a[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}
	/*------------------------------------*/
	// 1 .Tinh trung binh cong cac so le o vi tri chan
	// Chu y: Vi tri chan = chi so le
	int sum = 0;
	int count = 0;
	for (int i = 1; i < n; i += 2) {
		if (arr[i] % 2 == 1) {
			++count;
			sum += arr[i];
		}
	}
	printf("\nTrung binh cong = %f", (float)sum / count);
}