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

void swap_row(int arr[][100], int m, int hang1, int hang2)
{
    for (int index = 0; index < m; index++)
    {
        swap(arr[hang1][index], arr[hang2][index]);
    }
}

void swap_col(int arr[][100], int n, int cot1, int cot2)
{
    for (int k = 0; k < n; k++)
    {
        swap(arr[k][cot1], arr[k][cot2]);
    }
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
    int hang1, hang2;
    do
    {
        cout << "Nhap hang 1 va hang 2: ";
        cin >> hang1 >> hang2;
    } while (hang1 < 0 || hang2 < 0 || hang1 >= n || hang2 >= n);
    cout << "----------ma tran sau khi hoan vi hang " << hang1 << " va " << hang2 << "  ------------ " << endl;
    swap_row(arr, m, hang1, hang2);
    inmatran(arr, n, m);
    int cot1, cot2;
    do
    {
        cout << "Nhap cot 1 va cot 2: ";
        cin >> cot1 >> cot2;
    } while (cot1 < 0 || cot2 < 0 || cot1 >= m || cot2 >= m);
    cout << "----------ma tran sau khi hoan vi hang " << cot1 << " va " << cot2 << "  ------------ " << endl;
    swap_col(arr, n, cot1, cot2);
    inmatran(arr, n, m);
}