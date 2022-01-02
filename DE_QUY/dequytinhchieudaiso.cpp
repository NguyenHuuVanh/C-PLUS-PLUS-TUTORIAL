#include <iostream>
using namespace std;

int Length(int n)
{
    if (n < 10)
    {
        return 1;
    }
    else
    {
        return 1 + Length(n / 10);
    }
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "so chu so la " << Length(n);
}