#include <iostream>
using namespace std;

void chuyen(int n, char a, char c)
{
    cout << "\nChuyen dia thu " << n << " tu coc " << a << " sang coc " << c;
}
void ThapHaNoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        chuyen(1, a, c);
    }
    else
    {
        ThapHaNoi(n - 1, a, c, b);
        chuyen(n, a, c);
        ThapHaNoi(n - 1, b, a, c);
    }
}
int main()
{
    int sodia;
    cout << "Nhap so dia:";
    cin >> sodia;
    ThapHaNoi(sodia, 'A', 'B', 'C');
}
