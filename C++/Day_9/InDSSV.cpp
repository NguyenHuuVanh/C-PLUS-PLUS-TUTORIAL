#include <iostream>
#include <string>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

struct ThongtinSV
{
    string Fullname;
    int Age;
    string Address;
    string sex;
    string Date_and_Birth;
    int StudentCode;
    string Class;
    float Major1, Major2, Major3, Major4, Major5;
    string Education_lever;
    string school_year;
    float dtb = 0;
};

typedef ThongtinSV SV;

void DTB(SV &sv);
void Nhap(SV &sv);
void nhapN(SV a[], int n);
void Xuat(SV sv);
void sapxep(SV a[], int n);
void xeploai(SV sv);
void xeploaiN(SV a[], int n);
void XuatN(SV a[], int n);
void Thongtinmon(SV sv);
void XuatThongtinmonN(SV a[], int n);
void Hocphi(SV sv);
void XuatHocphiN(SV a[], int n);
void ThemSV(SV a[], int &n);
void XuatThemSVN(SV a[], int n);
void XoaSV(SV a[], int &n);

int main()
{
    int key;
    int n;
    char fileName[] = "DSSV.txt";
    bool Danhap = false;
    do
    {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
    } while (n <= 0);
    SV a[n];
    while (true)
    {
        cout << "\n";
        cout << "************************************************" << endl;
        cout << "**      CHUONG TRINH QUAN LY SINH VIEN        **" << endl;
        cout << "**           1.Nhap du lieu                   **" << endl;
        cout << "**           2.In danh sach sinh vien         **" << endl;
        cout << "**           3.Xem thong tin mon hoc          **" << endl;
        cout << "**           4.Xem hoc phi                    **" << endl;
        cout << "**           5.Xep loai sinh vien             **" << endl;
        cout << "**           6.Them sinh vien                 **" << endl;
        cout << "**           7.In danh sach sv sau khi them   **" << endl;
        cout << "**           8.Xoa sinh vien                  **" << endl;
        cout << "**           9.In danh sach sv sau khi xoa    **" << endl;
        cout << "**           10.Xuat danh sach sinh vien      **" << endl;
        cout << "**           0.Thoat                          **" << endl;
        cout << "************************************************" << endl;
        cout << "**           Nhap lua chon cua ban:           **" << endl;
        cin >> key;

        switch (key)
        {
        case 1:
            cout << "Ban da chon nhap danh sach sinh vien!";
            nhapN(a, n);
            cout << "Ban da nhap thanh cong danh sach sinh vien!" << endl;
            Danhap = true;
            cout << "Nhap phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;
        case 2:
            if (Danhap)
            {
                cout << "\nBan da chon xuat danh sach sinh vien!";
                XuatN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "\nNhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;

        case 3:
            if (Danhap)
            {
                cout << "\nBan da nhap xem thong tin mon hoc!";
                XuatThongtinmonN(a, n);
                /* XuatThongtinmonN(a, n); sao k xuất hàm vào đây đc ? */
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!" << endl;
            }
            cout << "Nhap phim bat ki de tiep tuc!"
                 << endl;
            system("pause");
            break;

        case 4:
            if (Danhap)
            {
                cout << "\nBan da nhap xem hoc phi!";
                XuatHocphiN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "Nhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;

        case 5:
            if (Danhap)
            {
                cout << "\nBan da chon xem xep loai sinh vien!";
                sapxep(a, n);
                xeploaiN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!" << endl;
            }
            cout << "Nhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;

        case 6:
            if (Danhap)
            {
                cout << "\nBan da chon them sinh vien!" << endl;
                ThemSV(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "Nhap phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;

        case 7:
            if (Danhap)
            {
                cout << "\nIn danh sach sinh vien sau khi them!" << endl;
                XuatThemSVN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "Nhap phim bat ki de tiep tuc!" << endl;
            system("pause");
            break;

        case 8:
            if (Danhap)
            {
                cout << "\nBan da chon xoa sinh vien!" << endl;
                XoaSV(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "\nNhap phim bat ki de tiep tuc!\n";
            system("pause");
            break;

        case 9:
            if (Danhap)
            {
                cout << "\nIn danh sach sinh vien sau khi xoa!";
                XuatN(a, n);
            }
            else
            {
                cout << "\nNhap danh sach sinh vien truoc!";
            }
            cout << "Nhap phim bat ki de tiep tuc!\n"
                 << endl;
            system("pause");
            break;

            // case 10:
            //     if (Danhap)
            //     {
            //         printf("\nBan da chon xuat DS SV!");
            //         xuatFile(a, n, fileName);
            //     }
            //     else
            //     {
            //         cout << "\nNhap danh sach sinh vien truoc!";
            //     }
            //     cout << "Nhap phim bat ki de tiep tuc!" << endl;
            //     system("pause");
            //     break;

        case 0:
            cout << "\nBan da chon thoat chuong trinh!";
            system("pause");
            return 0;

        default:
            cout << "\nKhong co chuc nang nay!";
            cout << "\nBam phim bat ky de tiep tuc!\n";
            system("pause");
            break;
        }
    }
}

void DTB(SV &sv)
{
    sv.dtb = (sv.Major1 + sv.Major2 + sv.Major3 + sv.Major4 + sv.Major5) / 5;
}

void Nhap(SV &sv)
{
    cout << "Nhap ten sinh vien: " << endl;
    fflush(stdin);
    getline(cin, sv.Fullname);
    cout << "Nhap gioi tinh: ";
    getline(cin, sv.sex);
    cout << "Nhap tuoi: ";
    cin >> sv.Age;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, sv.Address);
    cout << "Nhap ngay thang nam sinh: ";
    getline(cin, sv.Date_and_Birth);
    cout << "Nhap ma so sinh vien: ";
    cin >> sv.StudentCode;
    cout << "Nhap lop hoc: ";
    fflush(stdin);
    getline(cin, sv.Class);
    cout << "Nhap trinh do hoc van(DH/CD): ";
    getline(cin, sv.Education_lever);
    cout << "Nhap nien khoa(20XX-20XX): ";
    getline(cin, sv.school_year);
    cout << "Nhap diem mon Toan giai tich: ";
    cin >> (cin, sv.Major1);
    cout << "Nhap diem mon Xac suat thong ke: ";
    cin >> (cin, sv.Major2);
    cout << "Nhap diem mon Vat ly dai cuong: ";
    cin >> (cin, sv.Major3);
    cout << "Nhap diem mon Dai so tuyen tinh: ";
    cin >> (cin, sv.Major4);
    cout << "Nhap diem mon Ky thuat lap trinh: ";
    cin >> (cin, sv.Major5);
    DTB(sv);
}

void nhapN(SV a[], int n)
{
    cout << "\n------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        Nhap(a[i]);
    }
    cout << "-------------------------------------\n";
}

void XuatN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin sinh vien thu " << i + 1 << " la:" << endl;
        Xuat(a[i]);
    }
    cout << "-------------------------------------\n";
}

void Xuat(SV sv)
{
    cout << "\nHo ten sinh vien: " << sv.Fullname << "                    "
         << "Lop hoc cua sinh vien: " << sv.Class << endl;
    cout << "Tuoi sinh vien: " << sv.Age << "                    "
         << "trinh do hoc van sinh vien: " << sv.Education_lever << endl;
    cout << "Gioi tinh sinh vien: " << sv.sex << "                    "
         << "Nien khoa cua sinh vien: " << sv.school_year << endl;
    ;
    cout << "Dia chi sinh vien: " << sv.Address << "                    "
         << "Diem tung mon cua sinh vien la: " << sv.Major1 << " - " << sv.Major2 << " - " << sv.Major3 << " - " << sv.Major4 << " - " << sv.Major5 << endl;
    cout << "Ma so sinh vien: " << sv.StudentCode << "                    "
         << "Ngay thang nam sinh cua sinh vien: " << sv.Date_and_Birth << endl;
    // "Lop hoc cua sinh vien: " << sv.Class << endl;
    // cout << "trinh do hoc van sinh vien: " << sv.Education_lever << endl;
    //"Nien khoa cua sinh vien: " << sv.school_year << endl;
    // cout << "Diem tung mon cua sinh vien la: " << sv.Major1 << " - " << sv.Major2 << " - " << sv.Major3 << " - " << sv.Major4 << " - " << sv.Major5 << endl;
    cout << "Diem trung binh cua sinh vien la: "
         << sv.dtb
         << endl
         << "\n";
}

void sapxep(SV a[], int n)
{
    SV tmp; // dùng Bubble sort
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].dtb > a[j].dtb)
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

void xeploai(SV sv)
{
    if (sv.dtb >= 8)
        cout << "Gioi";
    else if (sv.dtb >= 6.5)
        cout << "Kha";
    else if (sv.dtb >= 4)
        cout << "Trung binh";
    else
        cout << "Yeu";
}

void xeploaiN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Xep loai cua SV thu " << i + 1 << " la: ";
        xeploai(a[i]);
    }
    cout << "\n-------------------------------------\n";
}

void Thongtinmon(SV sv)
{
    cout << "Diem Toan giai tich la: " << sv.Major1 << endl;
    cout << "Xac suat thong ke la: " << sv.Major2 << endl;
    cout << "Diem Vat ly dai cuong la: " << sv.Major3 << endl;
    cout << "Dai so tuyen tinh la: " << sv.Major4 << endl;
    cout << "Diem Ky thuat lap trinh la: " << sv.Major5 << endl;
}

void XuatThongtinmonN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin mon hoc cua sinh vien thu " << i + 1 << " la: \n"
             << endl;
        Thongtinmon(a[i]);
    }
    cout << "\n-------------------------------------\n";
}

void Hocphi(SV sv)
{
    cout << "Hoc phi chuong trinh dai tra moi mon la 430 ngan dong/1 tin chi!" << endl;
    cout << "Hoc phi chuong trinh clc moi mon la 516 ngan dong/1 tin chi!" << endl;
}

void XuatHocphiN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin hoc phi cua sinh vien thu " << i + 1 << " la:\n " << endl;
        Hocphi(a[i]);
    }
    cout << "\n-------------------------------------\n";
}

void ThemSV(SV a[], int &n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Moi ban nhap thong tin sinh vien can them: " << endl;
        Nhap(a[i + 1]);
        n++;
    }
}

void XuatThemSVN(SV a[], int n)
{
    cout << "\n-------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin sinh vien thu " << i + 1 << " la:" << endl;
        Xuat(a[i]);
    }
    cout << "\n-------------------------------------\n";
}

void XoaSV(SV a[], int &n)
{
    int vt;
    if (vt <= 1)
    {
        cout << "Khong the xoa sinh vien!";
    }
    else
    {
        cout << "Ban se xoa sinh vien so may: " << endl;
        cin >> vt;
        cout << "Ban da xoa sinh vien thu " << vt << "!" << endl;
        for (int i = vt + 1; i < n; i++)
        {
            a[i - 1] = a[i];
        }
        n--;
    }
}

// Gọi hàm xuất FILE giùm tui=>