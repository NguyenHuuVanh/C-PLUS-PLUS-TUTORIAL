#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *p;
    cout << "Nhap p: ";
    cin >> *p;
    if (p == NULL)
    {
        cout << "Loi cap phat!";
        exit(1);
    }
    else
    {
        *p = 100;
        cout << "Tai o nho" << p << " ";
        cout << "La gia tri" << *p;
    }
    if (p != NULL)
    {
        delete p;
        p = NULL;
    }
    free(p);
}