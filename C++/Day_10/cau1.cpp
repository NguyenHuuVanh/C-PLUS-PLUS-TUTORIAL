#include <stdio.h>
#include <math.h>

void nhap(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("a[%d]= %d\t", i, a[i]);
    }
}

void chiahetcho5(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {

            if (a[i] % 5 == 0)
            {
                printf("\nCac phan tu chan chia het cho 5: ");
                printf("%d\t", a[i]);
            }
        }
    }
}

int demsonguyento(int n)
{
    int dem = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 1)
    {
        printf("\nSo %d la so nguyen to!", n);
        return (1);
    }
    else
        return (0);
}

void demsonuyento(int a[], int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 10)
        {
            if (demsonguyento(a[i]))
                dem++;
        }
    }
    printf("\nCo %d so nguyen to nho hon 10", dem);
}

void MaxSoam(int a[], int n)
{
    int max;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0)
            max = a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < 0 and a[i] > max)
            max = a[i];
    }
    printf("\nSo am lon nhat la: %d", max);
}

void xoaphantu(int &n, int a[], int x)
{
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &x);
    for (int i = x; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    n--;
}

void xoavitrile(int a[], int &n)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 2)
            xoaphantu(n, a, i);
    }
}

int main()
{
    int n;
    int a[100];
    do
    {
        printf("nhap n: ");
        scanf("%d", &n);
        if (n > 10 or n < 0)
            printf("Nhap lai n! ");
    } while ((n > 10 or n < 0));
    nhap(a, n);
    xuat(a, n);
    chiahetcho5(a, n);
    demsonuyento(a, n);
    MaxSoam(a, n);
    xoavitrile(a, n);
    xuat(a, n);
}
