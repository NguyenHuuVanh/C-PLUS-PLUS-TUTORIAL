#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}