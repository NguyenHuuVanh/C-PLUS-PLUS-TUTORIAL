#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, x;
    cout << "Nhap he so a va b: ";
    cin >> a >> b;
    x = -b / a;
    if (a == 0)
    {
        cout << "Phuong trinh da cho vo nghiem!" << endl;
    }
    else if (b == 0)
    {
        cout << "Phuong trinh co vo so nghiem!" << endl;
    }
    else
        cout << "Phuong trinh co nghiem duy nhat la x= " << x << endl;
}