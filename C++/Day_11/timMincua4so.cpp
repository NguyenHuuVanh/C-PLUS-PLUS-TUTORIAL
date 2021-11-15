#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Nhap a,b,c,d = ";
    cin >> a >> b >> c >> d;
    if (a > b)
    {
        if (b > c)
        {
            if (c > d)
            {
                cout << "Min la " << d << endl;
            }
            else if (c == d)
            {
                cout << "Min la " << c << endl;
            }
            else
            {
                cout << "Min la " << c << endl;
            }
        }
        else if (b == c)
        {
            cout << "Min la " << b << endl;
        }
        else
        {
            cout << "Min la " << b << endl;
        }
    }
    else if (a == b)
    {
        cout << "Min la " << a << endl;
    }
    else
    {
        cout << "Min la " << a << endl;
    }
}