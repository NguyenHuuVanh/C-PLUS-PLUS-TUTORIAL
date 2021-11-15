#include <iostream>
#include <math.h>
using namespace std;

void inmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]= ";
        cin >> arr[i];
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

int kiemtra(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[100];
    int n;
    do
    {
        cout << "Nhap so nguyen n>0: ";
        cin >> n;
    } while (n <= 0 || n > 100);
    cout << "-----------Nhap vao mang------------" << endl;
    inmang(arr, n);
    cout << "-----------xuat mang------------" << endl;
    xuatmang(arr, n);
    cout << "\nSo nguyen lon nhat trong mang la: " << kiemtra(arr, n) << endl;
    system("pause\n");
}