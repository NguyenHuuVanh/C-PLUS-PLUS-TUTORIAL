#include <iostream>
using namespace std;

int main()
{
    int a = 25, b = 9;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    ++a;
    ++b;
    cout << "pa= " << *pa << endl;
    cout << "pb= " << *pb;
}