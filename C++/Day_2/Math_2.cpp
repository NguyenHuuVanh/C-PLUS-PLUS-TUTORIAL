#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n;
    float x, z;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    cout << "Nhap so thuc x: ";
    cin >> x;
    z = pow((x * x + x + 1), n) + pow((x * x - x + 1), n);
    cout << "Ket qua la: " << setprecision(2) << z << endl;
}