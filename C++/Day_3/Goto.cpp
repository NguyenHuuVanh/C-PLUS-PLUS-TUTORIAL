#include <iostream>
using namespace std;

int main()
{
    int n, sum, i = 0;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
tinh:
    sum += i;
    i++;
    if (i <= n)
    {
        goto tinh;
    }
    cout << "Tong la: " << sum << endl;
    return 0;
}