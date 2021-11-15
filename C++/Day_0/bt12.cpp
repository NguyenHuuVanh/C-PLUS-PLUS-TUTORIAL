#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Nhap a va b:";
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << a + b;
    }
    else if (a > b)
    {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << a - b;
    }
    else if (a < b)
    {
        cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << b - a;
    }
}