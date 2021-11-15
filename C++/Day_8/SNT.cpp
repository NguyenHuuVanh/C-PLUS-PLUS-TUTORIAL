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
    int check;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        cout << n << " Khong phai la so nguyen to!" << endl;
    }
    else
        cout << n << " la so nguyen to!";
}