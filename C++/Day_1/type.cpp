#include <iostream>
using namespace std;

int main()
{
    char s;
    cout << "Nhap ki tu: ";
    cin >> s;
    cout << (s + 2) << "sau khi chuyen doi: " << static_cast<char>(s + 2);
}