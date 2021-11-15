#include <iostream>
using namespace std;

void Input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]= ";
        cin >> *(arr + i);
    }
}

void Output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }
}

// Hàm tìm phần tử xuất hiện nhiều nhất cách 1

int Varible(int *arr, int n)
{
    int check = *(arr);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                check = *(arr + i);
            }
        }
    }
    return check;
}

// Hàm tìm phần tử xuất hiện nhiều nhất cách 2

int Count(int *arr, int n)
{
    int countmax = 1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                count++;
            }
        }
        if (count > countmax)
        {
            countmax = count;
        }
    }
    return countmax;
}

void ListCount(int *arr, int n)
{
    int list = Count(arr, n);
    if (list > 1)
    {
        cout << "\nPhan tu xuat hien nhieu nhat la " << Varible(arr, n);
    }
    else if (list <= 1)
    {
        cout << "\nSo lan xuat hien cua moi phan tu trong mang la 1";
    }
}

int main()
{
    int n, *arr;
    arr = (int *)malloc(n * sizeof(int));
    do
    {
        cout << "Nhap n>0: ";
        cin >> n;
    } while (n <= 0);
    cout << "----------Nhap mang-----------" << endl;
    Input(arr, n);
    cout << "----------In mang-------------" << endl;
    Output(arr, n);
    // cout << "\nPhan tu xuat hien nhieu nhat trong mang la " << Varible(arr, n) << endl;
    ListCount(arr, n);
    cout << "\nSo lan phan tu xuat hien trong mang la " << Count(arr, n);
    free(arr);
}