#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cout << setw(5) << "Cac so co 4 chu so abcd ma a+b = c+d la" << endl;
    cout << "";
    for (n = 1000; n < 10000; n++)
    {
        a = n / 1000;
        b = (n % 1000) / 100;
        c = (n % 100) / 10;
        d = n % 10;
        if ((a + b) == (c + d))
        {
            cout << n << setw(5);
        }
    }
}