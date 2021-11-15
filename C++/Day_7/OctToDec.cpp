#include <iostream>
#include <math.h>
using namespace std;

int OctToDec(int number)
{
    int p = 0;
    int decnumer = 0;
    while (number > 0)
    {
        decnumer += (number % 10) * pow(8, p);
        p++;
        number /= 10;
    }
    return decnumer;
}

int main()
{
    int OctcimalNumber;
    cout << "Enter Octcimalnumber: ";
    cin >> OctcimalNumber;
    cout << "DecNumber = " << OctToDec(OctcimalNumber);
}