#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    cin >> *p;
    for (int i = 0; i < *p; i++)
    {
        cout << i;
    }
}