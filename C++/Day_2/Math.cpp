#include <iostream>
using namespace std;

int main()
{
    int a_val = 20, b_val = 02;
    cout << "a_val < b_val ?" << (a_val < b_val) << endl;
    cout << "a_val > b_val ?" << (a_val > b_val) << endl;
    cout << "a_val = b_val ?" << (a_val == b_val) << endl;
    cout << "a_val # b_val ?" << (a_val != b_val) << endl;

    int a = 25, b = 9;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << (double)a / b << endl;
    cout << a << "%" << b << "=" << a % b << endl;
    a++;
    cout << "a++=" << a << endl;
    b--;
    cout << "b--=" << b << endl;
}