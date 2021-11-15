#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *p;
    p = arr;
    *p = 10;
    p++;
    *p = 20;
    p = &arr[2];
    *p = 30;
    p = arr + 3;
    *p = 40;
    p = arr;
    *(p + 4) = 50;
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
}