#include <iostream>
using namespace std;

int main()
{
    float x, y, z, t;
    x = -3 + ((4 % 5) / 2);
    cout << "Ket qua cua phep toan cau a la: " << x << endl;
    y = 3;
    !y % 4;
    cout << "Ket qua cua phep toan cau b la: " << y << endl;
    z = 3;
    !++z % 4;
    cout << "Ket qua cua phep toan cau c la: " << z << endl;
    t = 3;
    !((int)(++t) % 4);
    cout << "Ket qua cua phep toan cau d la: " << t;
}