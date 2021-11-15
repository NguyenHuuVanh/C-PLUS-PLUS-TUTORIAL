#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    fstream file, file1;
    char s[100], s1[100];
    file1.open("C:\\Users\\Administrator\\Documents\\Hello WorldNew.TXT", ios::out);
    while (1)
    {
        cout << "Nhap vao chuoi can tim: ";
        fgets(s, sizeof(s), stdin);
        if (strlen(s) == 1 || s[0] == '0')
        {
            cout << "Khong ton tai chuoi trong file!" << endl;
            break;
        }
        else
        {
            file.open("C:\\Users\\Administrator\\Documents\\Hello World.TXT", ios::in);
            if (file.is_open())
            {
                cout << "Doc file thanh cong!" << endl;
            }
            while (!file.eof())
            {
                file.getline(s1, sizeof(s1));
                if (strstr(s1, s))
                {
                    cout << "Tim thay chuoi \"" << s << "\" trong file" << endl;
                    break;
                }
            }
            // cout << "Khong tim thay chuoi \"" << s << "\" trong file" << endl;
            file1 << s << endl;
            file.close();
        }
    }
    file1.close();
}