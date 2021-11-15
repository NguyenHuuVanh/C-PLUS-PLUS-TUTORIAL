#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap n:"); scanf_s("%d", &n);
    int CountDigit(n);
    {
        int count = 0;
        while (n > 0)
        {
            n /= 10;
            ++count;
        }
        return count;
    }
    int bool; IsArmstrong(n);
    {
        int numDigit = CountDigit(n);
        int tmp = n, sum = 0, last;
        while (tmp > 0)
        {
            last = tmp % 10;
            tmp /= 10;
            sum += pow(last, numDigit;
        }
        if (sum == n)
        {
            return true;
        }
        else
        {
            return false;
        }
        if (IsArmstrong(n) == true)
        {
            printf("\n%d la so armstrong!", n);
        }
        else
        {
            printf("\n%d khong la so armstrong!", n);
        }
    }
}