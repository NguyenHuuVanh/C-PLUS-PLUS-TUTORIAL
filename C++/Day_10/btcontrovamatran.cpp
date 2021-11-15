#include <iostream>
using namespace std;

void input(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap arr[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    }
}

void output(int arr[][100], int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

bool kiemtrahoanghau(int arr[][100], int n, int m)
{
    int vtdong, vtcot;
    // kiểm tra dòng
    int x = arr[vtdong][vtcot];
    for (int j = 0; j < m; j++)
    {
        if (arr[vtdong][j] > x)
        {
            return false;
        }
    }
    // kiểm tra cột
    for (int i = 0; i < n; i++)
    {
        if (arr[i][vtcot] > x)
        {
            return false;
        }
    }
    // kiểm tra dường chéo 1
    int vtdong1 = vtdong + 1;
    int vtcot1 = vtcot + 1;
    while (vtcot1 + 1 < m && vtdong1 < vtdong)
    {
        if (arr[vtcot1][vtdong1] > x)
        {
            return false;
            vtdong1++;
            vtcot1++;
        }
    }

    vtdong1 = vtdong - 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 >= 0)
    {
        if (arr[vtcot1][vtdong1] > x)
            return false;
        vtcot1--;
        vtdong1--;
    }
    // kiểm tra đường chéo 2
    vtdong1 = vtdong + 1;
    vtcot1 = vtcot - 1;
    while (vtcot1 - 1 >= 0 && vtdong1 < n)
    {
        if (arr[vtcot1][vtdong1] > x)
            return false;
        vtdong1++;
        vtcot1--;
    }
    vtdong1 = vtdong - 1;
    vtcot1 = vtcot + 1;
    while (vtdong1 - 1 >= 0 && vtcot1 < m)
    {
        if (arr[vtcot1][vtdong1] > x)
            return false;
        vtdong1--;
        vtcot1++;
    }
    return true;
}

int DemSoLuongPhanTuHoangHau(int arr[][100], int n, int m)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (kiemtrahoanghau(arr, n, m) == true)
            {
                dem++;
            }
        }
    }
    return dem;
}

// void chuyenvi(int arr[][100], int n, int m)
// {
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << "\n";
//     }
// }

int main()
{
    int n, m, i, j;
    int arr[100][100];
    do
    {
        cout << "Nhap so hang: ";
        cin >> n;
        cout << "Nhap so cot: ";
        cin >> m;
    } while (n < 0 || m < 0 || n > 100 || m > 100);
    cout << "----------Nhap ma tran-----------" << endl;
    input(arr, n, m);
    cout << "----------xuat ma tran-----------" << endl;
    output(arr, n, m);
    cout << "----------so luong hoang hau trong ma tran-----------" << endl;
    cout << DemSoLuongPhanTuHoangHau(arr, n, m);
}
