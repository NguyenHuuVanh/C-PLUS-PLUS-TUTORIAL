#include <iostream>
#include <math.h>
using namespace std;

bool Kiemtrasochinhphuong(int n)
{

    float kq = sqrt(n);
    if (kq == (int)kq)
    {
        return true;
    }
    return false;
}

void insochinhphuong(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (Kiemtrasochinhphuong(i) == true)
        {
            cout << i << "\t";
        }
    }
}

int main()
{
    int n;
    do
    {
        cout << "Nhap n:" << endl;
        cin >> n;
    } while (n < 1);

    insochinhphuong(n);
}