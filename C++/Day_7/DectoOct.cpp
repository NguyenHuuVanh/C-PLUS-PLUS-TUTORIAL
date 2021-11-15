#include <iostream>
#include <math.h>
using namespace std;

int DectoOct(int number)
{
    int p = 0;
    int octnumer = 0;
    while (number > 0)
    {
        octnumer += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octnumer;
}

int main()
{
    int DecimalNumber;
    cout << "Enter decimalnumber: ";
    cin >> DecimalNumber;
    cout << "OctNumber = " << DectoOct(DecimalNumber);
}