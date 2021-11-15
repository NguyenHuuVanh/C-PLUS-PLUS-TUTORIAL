#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
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

void Increase(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                swap((arr + i), (arr + j));
            }
        }
    }
}

void Decrease(int *arr, int n, int count)
{
    for (int i = count; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                swap((arr + i), (arr + j));
            }
        }
    }
}

void Sortnumber(int *arr, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + i) % 2 == 0)
            {
                swap((arr + i), (arr + j));
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 != 0)
        {
            count++;
        }
    }
    Increase(arr, count);
    Decrease(arr, n, count);
}

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
    Increase(arr, n);
    output(arr, n);
    cout << "\nSap xep phan tu trong mang " << endl;
    Sortnumber(arr, n);
    output(arr, n);
    free(arr);
}