#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//#include <string>

int main()
{
    char str[20];
    cout << "Nhap chuoi: ";
    cin.getline(str, 20);
    cout << strlen(str) << endl;
    strupr(str);
    cout << str << endl;
    strlwr(str);
    cout << str << endl;
    strrev(str);
    cout << str << endl;
}
