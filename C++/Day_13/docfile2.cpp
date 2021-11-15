#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    char a[50] = "Hello Wordl!";
    file.open("C:\\Users\\Administrator\\Documents\\Hello World.TXT", ios::in);
    file.seekg(1, ios ::beg);
    while (!file.eof())
    {
        file >> a;
        cout << "gia tri: " << a << endl;
        cout << "Vi tri con tro: " << file.tellg() << endl;
    }
    file.close();
}