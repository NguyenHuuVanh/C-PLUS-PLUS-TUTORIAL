#include <iostream>
using namespace std;

int main()
{
    double n, sum;
    do
    {
        cout << "Moi ban nhap so KM = ";
        cin >> n;
    } while (n <= 0);
    if (n <= 1)
    {
        sum = n * 15000;
    }
    else
    {
        if (n <= 5)
        {
            sum = sum + (n - 1) * 13500;
        }
        else
        {
            sum = 15000 + (5 - 1) * 13500 + (n - 5) * 11000;
            if (n > 120)
            {
                sum = sum * (1 - 0.1);
            }
        }
    }
    cout << "Tong tien phai tra la " << (long)sum << endl;
}