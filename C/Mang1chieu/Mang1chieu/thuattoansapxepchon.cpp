#include <stdio.h>
#include <math.h>


void nhapmang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap gia tri arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}
}

void swap(int &xp, int &yp)
{
	int temp = xp;
	xp = yp;
	yp = temp;
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf("\narr[%d]=%d\n", i, arr[i]);
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n - 1; i++)
    {
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
       int min  = i;
       for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
               min = j;
        // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min], arr[i]);
    }
}

void PrintNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
}
int main()
{
    int n;
    int arr[20];
    printf("\nNhap n:");
    scanf_s("%d", &n);
    nhapmang(arr, n);
    xuatmang(arr, n);
    selectionSort(arr, n);
    printf("\nMang sau khi sap xep:");
    PrintNumber(arr, n);
    return 0;
}