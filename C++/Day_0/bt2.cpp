#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    float S, a;
    S = 0;
    do
    {
        cout << "\n Nhap so a :";
        cin >> a;
        if (a > 2)
        {
            cout << "\nSo a phai nho hon 2 vui long nhap lai !";
        }
    } while (a > 2);
    while (S < a)
    {
        n++;
        S = S + 1.0 / n;
    }
    if (S > a)
    {
        cout << "Gia tri nho nhat cua n la:" << n;
    }

    cout << "\nTong S:"
         << " la: " << S;
}