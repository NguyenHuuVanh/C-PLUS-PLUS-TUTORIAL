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
void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d]=%d", i, arr[i]);
    }
}
void Bubblesort(int arr[], int n)
{
    int tg;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = n-1; j >i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                tg = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tg;
            }
        }
    }
}

int PrintArrayNumber(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", arr[i]);
    }
    return 0;
}

// Hàm tìm kiếm nhị phân sử dụng giải thuật đệ quy
int binarySearch(int arr[], int n, int x)
{
    int r = n - 1; // chỉ số phần tử cuối
    int l = 0; // Chỉ số phần tử đầu tiên
    while (r >= l)
    {
        int mid = (r + l) / 2; 

        // Nếu arr[mid] = x, trả về chỉ số và kết thúc.
        if (arr[mid] == x)
            return mid;

        // Nếu arr[mid] > x, cập nhật lại right
        if (arr[mid] > x)
            r = mid - 1;
        // Nếu arr[mid] < x, cập nhật lại left
        if (arr[mid] < x)
            l = mid + 1;
    }

    // Nếu không tìm thấy
    return -1;
}

int main()
{
    int arr[20];
    int n ;
    printf("nhap n:");
    scanf_s("%d", &n);
    nhapmang(arr, n);
    xuatmang(arr, n);
    Bubblesort(arr, n);
    printf("\nsau khi sap xep:");
    PrintArrayNumber(arr, n);
    int x = 10;
    int result = binarySearch(arr, n, x);
    if (result == -1)
        printf("\n%d khong thay xuat hien trong mang!",x);
    else
        printf("\n%d xuat hien tai chi so %d", x, result);
    return 0;
}