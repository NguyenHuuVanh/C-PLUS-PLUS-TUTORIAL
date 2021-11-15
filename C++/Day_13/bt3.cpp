#include <iostream>
#include <math.h>
#include <conio.h>
#include <fstream>
using namespace std;

struct Thuephong
{
    string name;
    int days;
    string type1, type2, type3;
};

typedef Thuephong tp;

void nhap(tp &sl);
void nhapds(tp &sl);
void xuat(tp sl);
void xuatds(tp a[], int n);
int tinhtien1(tp, int n);
int tinhtien2(tp, int n);
int tinhtien3(tp, int n);
void xuatsum(tp a[], int n);

void nhap(tp &sl)
{
    cout << "Ho ten: ";
    fflush(stdin);
    getline(cin, sl.name);
    cout << "So ngay thue: " << endl;
    cin >> sl.days;
}

void nhapds(tp a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin khach hang so " << i + 1 << " : " << endl;
        nhap(a[i]);
    }
}

void xuat(tp sl)
{
    cout << "Ho ten: " << sl.name << endl;
    cout << "So ngay thue: " << sl.days << endl;
}

void xuatds(tp a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Thong tin khach hang thu " << i + 1 << endl;
        xuat(a[i]);
    }
}

void chonphong(tp sl)
{
    cout << "Phong loại 1: 14000/h:"
         << "\t"
         << "Phong loại 2: 16000/h"
         << "\t"
         << "Phong loại 3: 18000/h" << endl;
}

int tinhtien1(tp a[], int n)
{
    long long sum = 0;
    cout << "Phong loại 1: 14000/h" << endl;
    if (1 <= n <= 5)
    {
        sum = n * 24 * 14000;
    }
    else if (n >= 6)
    {
        sum = 5 * 24 * 14000 + (n - 5) * 14000;
        sum = sum - sum * 0.09;
    }
    return sum;
}

int tinhtien2(tp a[], int n)
{
    long long sum = 0;
    cout << "Phong loại 2: 16000/h" << endl;
    if (1 <= n <= 5)
    {
        sum = n * 24 * 16000;
    }
    else if (n >= 6)
    {
        sum = 5 * 24 * 16000 + (n - 5) * 16000;
        sum = sum - sum * 0.09;
    }
    return sum;
}

int tinhtien3(tp a[], int n)
{
    long long sum = 0;
    cout << "Phong loại 3: 18000/h" << endl;
    if (1 <= n <= 5)
    {
        sum = n * 24 * 18000;
    }
    else if (n >= 6)
    {
        sum = 5 * 24 * 18000 + (n - 5) * 18000;
        sum = sum - sum * 0.09;
    }
    return sum;
}

int main()
{
    int n, key, type;
    tp a[n];
    do
    {
        cout << "Nhap so luong khach: ";
        cin >> n;
    } while (n <= 0);

    cout << "\n";
    cout << "**********CHUONG TRINH QUAN LY THUE PHONG**********" << endl;
    cout << "**             1.Nhap ten khach hang             **" << endl;
    cout << "**             2.Chon phong                      **" << endl;
    cout << "**             3.Xem so tien                     **" << endl;
    cout << "**             4.Xuat danh sach                  **" << endl;
    cout << "**             5.Thanh toan                      **" << endl;
    cout << "***************************************************" << endl;
    cout << "**              Nhap lua chon:                   **" << endl;
    cin >> key;

    switch (key)
    {
    case 1:
        nhapds(a, n);
        cout << "Nhap phim bat ki de tiep tuc!" << endl;
        getch();
        break;
    case 2:
        cin >> type;
        switch (type)
        {
        case 1:
            cout << "Ban da chon phong loai 1!" << endl;
            break;
        case 2:
            cout << "Ban da chon phong loai 2!" << endl;
            break;
        case 3:
            cout << "Ban da chon phong loai 3!" << endl;
            break;
        default:
            cout << "Khong co loai phong này!" << endl;
            cout << "Nhap phim bat ki de tiep tuc!" << endl;
            getch();
            break;
        }
    case 3:
        if (type == 1)
        {
            cout << tinhtien1(a, n);
        }
        if (type == 2)
        {
            cout << tinhtien2(a, n);
        }
        if (type == 3)
        {
            cout << tinhtien3(a, n);
        }
        cout << "Nhap phim bat ki de tiep tuc!" << endl;
        getch();
        break;
    default:
        cout << "Khong co chuc nang nay!" << endl;
        cout << "Nhap phim bat ki de tiep tuc!" << endl;
        getch();
        break;
    }
}