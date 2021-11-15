#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
    {
        cout << "Nam " << n << " la nam nhuan!" << endl;
    }
    else
    {
        cout << "Nam " << n << " Khong phai la nam nhuan!" << endl;
    }
}