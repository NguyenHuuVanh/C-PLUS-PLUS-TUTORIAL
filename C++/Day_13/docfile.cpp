#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream MyFile;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    MyFile.open("C:\\Users\\Administrator\\Documents\\Hello World.TXT", ios::out | ios::binary);
    cout << "ghi du lieu vao bo nho!" << endl;
    MyFile.write(reinterpret_cast<char *>(a), sizeof(a));
    MyFile.close();
    MyFile.open("C:\\Users\\Administrator\\Documents\\Hello World.TXT", ios::in | ios::binary);
    int b[10];
    cout << "Doc du lieu tu bo nho!" << endl;
    MyFile.read(reinterpret_cast<char *>(b), sizeof(b));
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << "\t";
    }
}