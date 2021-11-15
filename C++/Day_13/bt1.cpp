#include <iostream>
#include <fstream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void sapxep(int arr[][100], int n, int m)
{
    for (int i = 0; i < n * m - 1; i++)
    {
        for (int j = i + 1; j < n * m; j++)
        {
            if (arr[i][i] < arr[i][j])
            {
                swap(arr[i][i], arr[i][j]);
            }
        }
    }
}

void xuat(int arr[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    fstream file;
    file.open("C:\\Users\\Administrator\\Documents\\matran.TXT", ios::in);
    if (!file.is_open())
    {
        cout << "Mo file that bai!" << endl;
    }
    else
    {
        int n, m;
        int arr[100][100];
        file >> n, m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                file << arr[i][j];
            }
        }
        xuat(arr, n, m);
        sapxep(arr, n, m);
        cout << "Ma tran da duoc sap xep!" << endl;
        sapxep(arr, n, m);
        fstream file1;
        file1.open("C:\\Users\\Administrator\\Documents\\matran1.TXT", ios::out);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                file1 << arr[i][j];
                file1 << " ";
            }
            file1 << "\n";
        }
        file1.close();
    }
    file.close();
}