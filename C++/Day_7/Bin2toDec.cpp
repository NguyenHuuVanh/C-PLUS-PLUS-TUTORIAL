#include <iostream>
#include <math.h>
using namespace std;

int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        p++;
        binaryNumber /= 10;
    }
    return decNumber;
}

int main()
{
    int long long binaryNumber;
    cout << "Nhap so nhi phan: ";
    cin >> binaryNumber;
    cout << "Dec = " << BinToDec(binaryNumber);
    return 0;
}
