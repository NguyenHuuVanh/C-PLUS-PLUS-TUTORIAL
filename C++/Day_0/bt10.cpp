#include <iostream>
#include <string>
using namespace std;

void Reverse(int n)
{
    while (n > 0)
    {
        int tmp = n % 10;
        n /= 10;
        cout << tmp;
    }
}

int main()
{
    int n, tmp = 0;
    cout << "Nhap n: ";
    cin >> n;
    // while (n > 0)
    // {
    //     tmp = n % 10;
    //     n /= 10;
    //     cout << tmp;
    // }
    cout << "So dao nguoc la ";
    Reverse(n);
}
