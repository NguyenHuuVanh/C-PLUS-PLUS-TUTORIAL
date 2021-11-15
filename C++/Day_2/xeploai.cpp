#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float DToan, Dly, DHoa;
    cout << "Nhap diem toan: ";
    cin >> DToan;
    cout << "Nhap diem ly: ";
    cin >> Dly;
    cout << "Nhap diem hoa: ";
    cin >> DHoa;
    float dtb = (DHoa + Dly + DToan) / 3;
    if (dtb >= 9 && dtb <= 10)
    {
        cout << "Dat loai xuat sac!";
    }
    else if (dtb >= 8 && dtb < 9)
    {
        cout << "Dat loai gioi!";
    }
    else if (dtb >= 7 && dtb < 8)
    {
        cout << "Dat loai kha!";
    }
    else if (dtb >= 5 && dtb < 7)
    {
        cout << "Dat loai trung binh!";
    }
    else
    {
        cout << "Dat loai kem!";
    }
    return 0;
}