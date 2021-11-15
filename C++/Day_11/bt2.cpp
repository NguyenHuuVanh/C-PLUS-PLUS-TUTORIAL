#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    cout << "Nhap ky tu: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 97)
        {
            str[i] += 32;
        }
        else
            str[i] -= 32;
    }
    cout << str;
}