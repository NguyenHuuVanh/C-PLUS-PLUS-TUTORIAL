#include <iostream>
#include <math.h>
using namespace std;

int DectoHexa(int number)
{
    int p = 0;
    char hexanumer = 0;
    while (number > 0)
    {
        hexanumer += (number % 16) * pow(10, p);
        p++;
        number /= 16;
    }
    return hexanumer;
}

int main()
{
    float DecimalNumber;
    cout << "Enter decimalnumber: ";
    cin >> DecimalNumber;
    cout << "HexacimalNumber = " << DectoHexa(DecimalNumber);
}