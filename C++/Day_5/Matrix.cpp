#include <iostream>
using namespace std;

void nhapmatran(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap arr[" << i << "][" << j << "]=";
            cin >> arr[i][j];
        }
    }
}

void xuatmatran(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\narr[" << i << "][" << j << "]= " << arr[i][j] << endl;
        }
    }
}

void inmatran(int arr[][100], int m, int n)
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

int main
{
    int arr[100][100];
    int m, n;
    cout << "Nhap so hang: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    cout << "----------Nhap vao ma tran------------" << endl;
    nhapmatran(arr, m, n);
    xuatmatran(arr, m, n);
    cout << "----------xuat ma tran------------" << endl;
    inmatran(arr, m, n);
}