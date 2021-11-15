#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, x, x0, x1, x2, denlta;
    cout << "Nhap cac he so a,b,c: ";
    cin >> a >> b >> c;
    denlta = b * b - 4 * a * c;
    x = -b / 2 * a;
    x1 = (-b + sqrt(denlta)) / 2 * a;
    x2 = (-b - sqrt(denlta)) / 2 * a;
    x0 = -c / b;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Phuong trinh da cho vo so nghiem!" << endl;
            }
            else
                cout << "Phuong trinh da cho vo nghiem!" << endl;
        }
        else
        {
            cout << "Phuong trinh tro thanh phuong trinh bac nhat!" << endl;
            cout << "_____________________________________________" << endl;
            cout << "Phuong trinh co nghiem duy nhat x= " << x0 << endl;
        }
    }
    else
    {
        cout << "Phuong trinh tro thanh phuong trinh bac 2!" << endl;
        cout << "__________________________________________" << endl;
        if (denlta == 0)
        {
            cout << "Phuong trinh co nghiem kep x= " << x << endl;
        }
        else if (denlta > 0)
        {
            cout << "Phuong trinh co hai nghiem phan biet x1= " << x1 << ",x2= " << x2 << endl;
        }
        else
            cout << "Phuong trinh da cho vo nghiem!" << endl;
    }
}