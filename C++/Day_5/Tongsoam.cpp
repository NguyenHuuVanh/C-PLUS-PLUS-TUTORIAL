#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void nhapmatran(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Nhap arr[" << i << "][" << j << "]=";
            cin >> arr[i][j];
        }
    }
}

void xuatmatran(int arr[][100], int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "\narr[" << i << "][" << j << "]= " << arr[i][j] << endl;
        }
    }
}

void inmatran(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

int sum_ofnegative_integer(int arr[][100], int n, int m)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] < 0)
            {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[100][100];
    int m, n;
    cout << "Nhap so hang: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    cout << "----------Nhap vao ma tran------------" << endl;
    nhapmatran(arr, n, m);
    xuatmatran(arr, n, m);
    cout << "----------xuat ma tran------------" << endl;
    inmatran(arr, n, m);
    cout << "Tong cac so am trong ma tran la " << sum_ofnegative_integer(arr, n, m);
}