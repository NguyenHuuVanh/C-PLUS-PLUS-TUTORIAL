#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void input(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]= ";
        cin >> *(arr + i);
    }
}

void output(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(arr + i) << "\t";
    }
}

int FindEvennumber(int *arr, int n)
{
    int maxEvennum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            maxEvennum = *(arr + i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0 && *(arr + i) > maxEvennum)
        {
            maxEvennum = *(arr + i);
        }
    }
    return maxEvennum;
}

int FindOddnumber(int *arr, int n)
{
    int minOddnum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            minOddnum = *(arr + i);
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 != 0 && *(arr + i) < minOddnum)
        {
            minOddnum = *(arr + i);
        }
    }
    return minOddnum;
}

void Bubblesort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (*(arr + j) < *(arr + j - 1))
            {
                swap(*(arr + j), *(arr + j - 1));
            }
        }
    }
}

// void currentOutput(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << *(arr + i) << "\t";
//     }
// }

int main()
{
    int *arr;
    arr = (int *)malloc(100 * sizeof(int));
    int n;
    do
    {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0 || n > 100);
    cout << "----------Nhap mang-----------" << endl;
    input(arr, n);
    cout << "----------In mang-------------" << endl;
    output(arr, n);
    cout << "\nSap xep phan tu trong mang " << endl;
    Bubblesort(arr, n);
    output(arr, n);
    if (FindEvennumber(arr, n) == 0)
    {
        cout << "\nKhong co so chan trong mang!";
    }
    else if (FindEvennumber(arr, n) != 0)
    {
        cout << "\nSo chan lon nhat trong mang la: " << FindEvennumber(arr, n) << endl;
    }

    if (FindOddnumber(arr, n) == 0)
    {
        cout << "\nKhong co so le trong mang!";
    }
    else if (FindOddnumber(arr, n) != 0)
    {
        cout << "\nSo le nho nhat trong mang la: " << FindOddnumber(arr, n) << endl;
    }
}
