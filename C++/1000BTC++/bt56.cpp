#include <iostream>
using namespace std;

int main()
{
    int n, m, dem = 0, dem2 = 0, flag = 0;
    cout << "Nhap n:";
    cin >> n;
    int tmp = n;
    do
    {
        m = n % 10;
        if (m % 2 == 0)
        {
            dem++;
        }
        flag++;
        if (m % 2 != 0)
        {
            dem2++;
        }
    } while (n /= 10);
    if (dem == flag)
    {
        cout << tmp << " la so toan chan! ";
    }
    if (dem2 == flag)
    {
        cout << tmp << " la so toan le! ";
    }
    else
    {
        cout << tmp << " khong phai la so toan chan toan le! ";
    }
}