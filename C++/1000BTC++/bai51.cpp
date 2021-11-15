#include <iostream>
using namespace std;

// Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
int main()
{
    int n, m, k, max = 0;

    ;
    do
    {
        cout << "Nhap so nguyen duong n: ";
        cin >> n;
    } while (n <= 0);
    if (n == 0)
    {
        cout << "Chu so lon nhat la " << max << endl;
    }
    else
    {
        do
        {
            m = n % 10;
            if (m > max)
            {
                max = m;
            }
        } while (n /= 10);
    }
    cout << "Chu so lon nhat la " << max << endl;
}
