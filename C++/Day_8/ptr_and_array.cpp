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

int main()
{
    int arr[20];
    int n;
    int *p;
    cout << "Nhap n: ";
    cin >> n;
    p = arr;
    inputArray(arr, n);
    outputArray(arr, n);
    cout << "\nsau khi gan----------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << p + 1;
}