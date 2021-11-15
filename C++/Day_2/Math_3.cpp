#include <iostream>
using namespace std;

int main()
{
    int sl, dongia;
    float giamgia, cuocvanchuyen, sotientra;
    cout << "Nhap sl: ";
    cin >> sl;
    cout << "Nhap don gia: ";
    cin >> dongia;
    giamgia = sl * dongia * 0.12;
    cuocvanchuyen = sl * dongia * 0.05;
    sotientra = sl * dongia - giamgia + cuocvanchuyen;
    cout << "So tien duoc giam gia la: " << giamgia << endl;
    cout << "Cuoc van chuyen la: " << cuocvanchuyen << endl;
    cout << "So tien phai tra la: " << sotientra << endl;
}