#include <iostream>
#include <math.h>
using namespace std;

// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
int main()
{
    int n, i = 1, x;
    float sum, M = 1, T = 1;
    cout << "Nhap n,x: ";
    cin >> n >> x;
    while (i <= n)
    {
        T *= x;
        M *= i;
        sum += T / M;
        i++;
    }
    cout << sum;
}

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//     int i, n;
//     float x, S, T;
//     long M;
//     printf("\nNhap x: ");
//     scanf("%f", &x);
//     do
//     {
//         printf("\nNhap n: ");
//         scanf("%d", &n);
//         printf("\n N phai >= 1. Xin nhap lai !");
//     } while (n < 1);

//     S = 0;
//     T = 1;
//     M = 1;
//     i = 1;

//     while (i <= n)
//     {
//         T = T * x;
//         M = M * i;
//         S = S + T / M;
//         i++;
//     }
//     // printf("\nTong la %f", S);
//     return 0;
// }