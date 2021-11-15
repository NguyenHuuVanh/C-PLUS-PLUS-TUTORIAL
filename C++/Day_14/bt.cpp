#include <iostream>
using namespace std;

int Tinh(int n)
{
    int S1 = 0, S2 = 1;          // khởi tạo S1=0,S2=1
    for (int i = 1; i <= n; i++) // dùng vòng lặp for bắt đầu từ 1 đến n
    {
        S1 += i; // cộng dồn từ 1 đến n
        S2 *= i; // nhân dồn từ 1 đến n
    }
    // cout << S1 << endl;
    // cout << S2; // in ra giá trị S1 S2
    return S1;
    return S2;
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    cout << "Ket qua la " << Tinh(n) << endl;
}