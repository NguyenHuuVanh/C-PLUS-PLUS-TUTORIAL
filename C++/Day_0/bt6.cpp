#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int flag = 0;
    cout << "Nhap so doi xung: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        int middle = (str.length()) / 2;
        if (str[middle - 1] == str[middle + 1])
        {
            flag = 1;
        }
        else
        {
            int flag = 0;
        }
    }
    if (flag)
    {
        cout << str << " la so doi xung! " << endl;
    }
    if (flag == 0)
        cout << str << " khong phai so doi xung! " << endl;
}