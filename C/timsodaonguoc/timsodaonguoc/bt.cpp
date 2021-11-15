
#include <stdio.h>
#include <math.h>

int First(long long int n, int first, int last)
{
    do
    {
        int first = n % 10;
    } while (n /= 10);
    return first;
}

int Last(long long int n, int first, int last)
{
    last = n % 10;
    return last;
}

int main()
{
    long long int n;
    printf("Nhap n:");
    scanf_s("%lld", &n);
    if(First==Last)
    {
        printf("YES");
    }
    if(First!=Last)
    {
        printf("NO");
    }
}