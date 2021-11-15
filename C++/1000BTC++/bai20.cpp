#include <iostream>
#include <math.h>
using namespace std;

// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
void TimUoc(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int n, sum = 0;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    if (n == 1)
    {
        cout << "Uoc cua " << n << " la 1!" << endl;
        cout << "Tong uoc cua " << n << " la: 1 ";
    }
    else
    {
        cout << "Uoc cua " << n << " la: ";
        TimUoc(n);
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        cout << "\nTong uoc cua " << n << " la: " << sum;
    }
}