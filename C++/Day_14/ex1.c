#include <stdio.h>

int tinhtong(int n)
{
    int S1 = 0;
    for (int i = 1; i <= n; i++)
    {
        S1 += i;
    }
    return S1;
}

int tinhtich(int n)
{
    int S2 = 1;
    for (int i = 1; i <= n; i++)
    {
        S2 *= i;
    }
    return S2;
}

int main()
{
    int n;
    do
    {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("Tong la %d", tinhtong(n));
    printf("\nTich la %d", tinhtich(n));
}