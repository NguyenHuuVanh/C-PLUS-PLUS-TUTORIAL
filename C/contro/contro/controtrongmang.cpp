#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n;
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf_s("%d", &n);
    } while (n < 1);

    int* p = &arr[0];
    // Nhập mảng
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf_s("%d", (p + i));
    }
    // xuất mảng
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d]=%d", i,*(arr+i));
    }
}