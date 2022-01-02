#include <iostream>
using namespace std;

float giaithua(int n)
{
    if (n == 1)
    {
        return 0.5;
    }
    else
    {
        return giaithua(n - 1) + 1.0 / (float)(n * (n + 1));
    }
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "Ket qua = " << giaithua(n);
}