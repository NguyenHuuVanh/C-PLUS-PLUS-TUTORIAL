#include <iostream>
using namespace std;
#define MAX 100

void nhapmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
}

void xuatmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}

void bubblesort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                arr[j] = temp;
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

void inmang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}

void Max(int arr[], int n)
{
    cout << "\nMax cua mang la " << arr[n - 1] << endl;
}

void Min(int arr[], int n)
{
    cout << "Min cua mang la " << arr[0] << endl;
}

int main()
{
    int arr[MAX];
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n < 1 || n > MAX);
    cout << "----------Nhap vao mang------------" << endl;
    nhapmang(arr, n);
    cout << "----------xuat mang--------------" << endl;
    xuatmang(arr, n);
    bubblesort(arr, n);
    cout << "----------mang sau khi sap xep--------------" << endl;
    inmang(arr, n);
    Max(arr, n);
    Min(arr, n);
    system("pause");
    cout << "press any key to exit...";
}