#include <iostream>
using namespace std;

int main()
{
    int n, m, min = 0;
    cout << "Nhap n:";
    cin >> n;
    min = n % 10;
    do
    {
        m = n % 10;
        if (m < min)
        {
            min = m;
        }
    } while (n /= 10);
    cout << min;
}