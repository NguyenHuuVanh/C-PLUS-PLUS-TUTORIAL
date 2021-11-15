#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100 

void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

bool IsPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

void PrintPrime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            printf("%2d", a[i]);
        }
    }
}

int main()
{
    int arr[MAX_SIZE];
    int n; 
    do
    {
        printf("Nhap n = ");
        scanf_s("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
    NhapMang(arr, n);
    XuatMang(arr, n);
    int primeCount = PrimeCount(arr, n);
    printf("\nSo luong so nguyen to la %d", primeCount);
    if (primeCount > 0)
    {
        printf("\nDanh sach so nguyen to la:");
        PrintPrime(arr, n);
    }
}