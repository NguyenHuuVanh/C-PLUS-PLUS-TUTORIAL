#include <iostream>
#include <string>
#include <math.h>
using namespace std;

struct SINHVIEN
{
    string name;
    string masv;
    string diachi;
    float dtoan, dly, dhoa;
    float dtb = 0;
};

void nhap(SINHVIEN &sv)
{
    cout << "Nhap ten sinh vien: " << endl;
    fflush(stdin);
    getline(cin, sv.name);
    cout << "Nhap ma sinh vien: " << endl;
    getline(cin, sv.masv);
    cout << "Nhap dia chi sinh vien: " << endl;
    getline(cin, sv.diachi);
    cout << "Nhap diem toan sinh vien: " << endl;
    cin >> sv.dtoan;
    cout << "Nhap diem ly sinh vien: " << endl;
    cin >> sv.dly;
    cout << "Nhap diem hoa sinh vien: " << endl;
    cin >> sv.dhoa;
    // DTB(SINHVIEN);
}

void nhapN(SINHVIEN a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-----Nhap thong tin sinh vien thu " << i + 1 << "--------" << endl;
        nhap(a[i]);
    }
}

void xuat(SINHVIEN sv)
{
    cout << "Ho ten : " << sv.name << endl;
    cout << "Ma sinh vien : " << sv.masv << endl;
    cout << "Dia chi : " << sv.diachi << endl;
    cout << "Diem Toan : " << sv.dtoan << endl;
    cout << "Diem Ly : " << sv.dly << endl;
    cout << "Diem Hoa : " << sv.dhoa << endl;
    cout << "Diem trung binh cua sinh vien la" << sv.dtb << endl;
}

void xuatN(SINHVIEN a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "-------thong tin sinh vien thu " << i + 1 << "----------" << endl;
        xuat(a[i]);
    }
}

void DTB(SINHVIEN &sv)
{
    sv.dtb = (sv.dtoan + sv.dly + sv.dhoa) / 3;
}

int main()
{
    int n;
    SINHVIEN a[n];
    do
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        cout << "----------Ban da nhap thong tin sinh vien!--------------\n"
             << endl;
    } while (n <= 0);
    nhapN(a, n);
    xuatN(a, n);
}