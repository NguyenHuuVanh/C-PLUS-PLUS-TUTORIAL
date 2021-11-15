#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // set the number you want to square and cube to.
    int x = 50;
    // set the width
    int w = 10;
    // output the column headings
    // use setw() with a arg for the width
    cout << setw(w) << "Number" << setw(w) << " Square " << setw(w) << " Cube " << endl;
    cout << "== == == == == == == == == == == == == == == == == ==" << endl;
    for (int i = 3; i <= x; i += 9)
    {
        // output the number, square and cube in fields of width x
        cout << setw(w) << i << setw(w) << pow(i, 2) << setw(w) << pow(i, 3) << endl;
    }
}