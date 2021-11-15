#include <iostream>
#include <math.h>
using namespace std;

Daonguoc(int n)
{
    while (n > 0)
    {
        n % 10;
        int last;
        last = n /= 10;
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "So sau khi dao nguoc la" << Daonguoc(n);
}