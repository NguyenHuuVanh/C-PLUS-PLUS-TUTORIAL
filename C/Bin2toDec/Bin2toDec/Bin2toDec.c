#include <stdio.h>
#include <math.h>

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
    printf("\nNhap so nhi phan: ");
    scanf_s("%lli", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
    return 0;
}
