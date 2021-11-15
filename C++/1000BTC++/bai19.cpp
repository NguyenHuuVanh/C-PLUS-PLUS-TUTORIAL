#include <iostream>
#include <math.h>
using namespace std;

// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!

int main()
{
    int n, x, i = 1, j = 1;
    float T = 1, M = 1, N = 1;
    long double sum = 1 + x;
    cout << "Enter value n,x: ";
    cin >> n >> x;
    while (i <= n)
    {
        j = i * 2;
        T = pow(x, (i * 2 + 1));
        N *= (i * 2 + 1) * j;
        sum += T / (float)N;
        i++;
    }
    cout << "Sum = " << sum;
}