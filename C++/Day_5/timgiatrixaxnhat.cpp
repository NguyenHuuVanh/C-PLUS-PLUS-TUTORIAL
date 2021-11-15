#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 100

int distance_of_x(int a, int b)
{
    return abs(a - b);
}

int find_distance(int arr[], int n, int x)
{
    int max_distance = distance_of_x(arr[0], x);
    int index = 0, new_distance;
    for (int new_index = 1; new_index < n; new_index++)
    {
        new_distance = distance_of_x(arr[new_index], x);
        if (new_distance > max_distance)
        {
            max_distance = new_distance;
            index = new_index;
        }
    }
    return arr[index];
}

void input_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
}

void output_Array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=" << arr[i] << endl;
    }
}

int main()
{
    int arr[MAX];
    int n, x;
    cout << "Enter value x:";
    cin >> x;
    do
    {
        cout << "Enter value n: ";
        cin >> n;
    } while (n < 1 || n > MAX);
    cout << "----------Nhap vao mang------------" << endl;
    input_Array(arr, n);
    cout << "----------xuat mang--------------" << endl;
    output_Array(arr, n);
    cout << "furthest " << x << " value is " << find_distance(arr, n, x);
    system("pause");
    cout << "press any key to exit...";
}