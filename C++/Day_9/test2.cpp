#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
}

void outputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}

void Themphantu(int arr[], int &n, int vt, int x)
{
    cout << "Nhap gia tri can them: ";
    cin >> x;
    cout << "Nhap vi tri muon them: ";
    cin >> vt;
    for (int i = n - 1; i >= vt; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[vt] = x;
    n++;
}

void Xoaphantu(int arr[], int &n, int vt)
{
    cout << "Nhap vi tri muon xoa: ";
    cin >> vt;
    for (int i = vt + 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    n--;
}

int main()
{
    int vt, x;
    int arr[20];
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "\n-------Nhap mang----------" << endl;
    inputArray(arr, n);
    cout << "\n-------xuat mang----------" << endl;
    outputArray(arr, n);
    cout << "\n-------them mang----------" << endl;
    Themphantu(arr, n, vt, x);
    cout << "\n-------sau khi them mang----------" << endl;
    outputArray(arr, n);
    cout << "\n-------xoa mang----------" << endl;
    Xoaphantu(arr, n, vt);
    cout << "\n-------sau khi xoa mang----------" << endl;
    outputArray(arr, n);
}