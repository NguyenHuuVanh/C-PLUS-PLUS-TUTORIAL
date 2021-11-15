#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class connguoi
{
public:
    string hoten;
    int tuoi;

public:
    void set();
};

void connguoi ::set()
{
    cout << "Nhap Ho Ten: ";
    fflush(stdin); // Xóa bộ đệm
    getline(cin, this->hoten);

    cout << "Nhap Tuoi: ";
    cin >> this->tuoi;
}

int main()
{
    connguoi obj; // Khai báo obj là 1 đối tượng trong lớp connguoi

    obj.set();

    cout << "Ho Ten: " << obj.hoten << endl;
    cout << "Tuoi: " << obj.tuoi << endl;

    return 0;
}