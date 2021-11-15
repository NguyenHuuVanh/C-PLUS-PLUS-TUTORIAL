#include <iostream>
using namespace std;

int main()
{
    int a, b, n, sum = 0;
    do
    {
        cout << "Nhap ba so nguyen a,b,n: ";
        cin >> a >> b >> n;
    } while ((a >= n && b >= n) || a >= n || b >= n);

    for (int i = 1; i < n; i++)
    {
        if (i % a == 0 && i % b != 0)
        {
            sum += i;
        }
    }
    cout << "Tong la " << sum;
}