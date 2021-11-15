#include <iostream>
using namespace std;

union SoHoc
{
    char c;
    int i;
    float f;
};
SoHoc so;
int main()
{

    so.c = 'C';
    cout << "so.c= " << so.c << endl;
    so.i = 1;
    // cout << "so.c= " << so.c << endl; đã bị thay đổi
    cout << "so.i= " << so.i << endl;
    so.f = 1.5;
    cout << "so.f= " << so.f << endl;
}