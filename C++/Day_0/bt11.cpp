#include <iostream>
using namespace std;

int main()
{
    int first, second;
    for (int i = 10; i <= 99; i++)
    {
        first = i % 10;
        second = i / 10;
        if ((first * second) == (first + second) * 2)
        {
            cout << i << "\t";
        }
    }
}