#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << "Nhap n>0: ";
        cin >> n;
    } while (n <= 0);
    int i = 2, check = 0;
    for (; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            check++;
        }
    }
    if (check)
    {

        cout << n << " Khong phai la so nguyen to!";
    }
    else
        cout << n << " la so nguyen to!" << endl;
}