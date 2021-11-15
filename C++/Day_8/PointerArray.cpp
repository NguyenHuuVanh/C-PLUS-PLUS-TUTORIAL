#include <iostream>
using namespace std;

int main()
{
    int *ptr[5];
    int a = 10;
    ptr[0] = ptr[1] = &a;
    a++;
    ptr[2] = &a;
    a += 10;
    ptr[3] = &a;
    a += 10;
    ptr[4] = &a;
    a += 10;
    ptr[5] = &a;
    for (int i = 0; i <= 5; i++)
    {
        cout << *ptr[i] << " ";
    }
}