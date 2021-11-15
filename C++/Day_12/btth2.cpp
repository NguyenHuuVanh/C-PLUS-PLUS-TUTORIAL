#include <iostream>
#include <string>
using namespace std;

struct Hocsinh
{
    string name;
    float dtoan, dly, dhoa;
    float dtb = 0;
};

typedef Hocsinh HS;

void nhap(HS &hs);
void nhapN(HS a[], int n);
void xuat(HS hs);
void xuatN(HS a[], int n);
void DTB(HS &hs);
void sapxep(HS a[], int n);
void xeploai(HS hs);
void xeploaiN(HS a[], int n);

void sapxep(HS a[], int n)
{
    HS tmp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[j].dtb < a[j - 1].dtb)
            {
                tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            }
        }
    }
}

void xeploai(HS hs)
{
    if (hs.dtb >= 8)
        cout << "Gioi";
    else if (hs.dtb >= 6.5)
        cout << "Kha";
    else if (hs.dtb >= 4)
        cout << "Trung binh";
    else
        cout << "Yeu";
}

void xeploaiN(HS a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Xep loai cua hoc sinh thu" << i + 1 << " la " << endl;
        xeploai(a[i]);
    }
}

void DTB(HS &hs)
{
    hs.dtb = (hs.dtoan + hs.dly + hs.dhoa) / 3;
}

void nhap(HS &hs)
{
    cout << "Nhap diem Toan: ";
    cin >> hs.dtoan;
    cout << "\nNhap diem Ly: ";
    cin >> hs.dly;
    cout << "\nNhap diem Hoa: ";
    cin >> hs.dhoa;
    fflush(stdin);
    // cout << "\nNhap ten hoc sinh : ";
    // getline(cin, hs.name);
    DTB(hs);
}

void nhapN(HS a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << " : " << endl;
        nhap(a[i]);
    }
}

void xuat(HS hs)
{
    cout << "Ho ten: " << hs.name << endl;
    cout << "Diem Toan: " << hs.dtoan << endl;
    cout << "Diem Ly: " << hs.dly << endl;
    cout << "Diem Hoa: " << hs.dhoa << endl;
    cout << "Diem trung binh: " << hs.dtb << endl;
}

void xuatN(HS a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin hoc sinh thu " << i + 1 << " : " << endl;
        xuatN(a, n);
    }
}

int main()
{
    int n;
    HS a[n];
    do
    {
        cout << "Nhap so luong hoc sinh: ";
        cin >> n;
    } while (n <= 0);
    nhapN(a, n);
    xuatN(a, n);
    xeploaiN(a, n);
}