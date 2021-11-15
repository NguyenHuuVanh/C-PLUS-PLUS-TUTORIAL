#include <iostream>
#include <math.h>
using namespace std;

void CheckPrimeNumber(int n)
{
    int check;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        cout << n << " Khong phai la so nguyen to!";
    }
    else
        cout << n << " la so nguyen to!";
}

int main()
{
    int n;
    cout << "Nhap so nguyen n:";
    cin >> n;
    while (n < 0)
    {
        cout << "Nhap lai n>0!";
    }

    CheckPrimeNumber(n);
}