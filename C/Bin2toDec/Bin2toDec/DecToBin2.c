#include <stdio.h>
#include <math.h>

int DecToBin2(int DecimalNumber)
{
    int p = 0;
    long long  binNumber = 0;
    while (DecimalNumber > 0)
    {
        binNumber += (DecimalNumber % 2) * pow(10, p);
        p++;
        DecimalNumber /= 2;
    }
    return binNumber;
}

int main()
{
    int DecimalNumber;
    printf("\nNhap so thap phan: ");
    scanf_s("%d", &DecimalNumber);
    printf("Bin = %d", DecToBin2(DecimalNumber));
    return 0;
}
