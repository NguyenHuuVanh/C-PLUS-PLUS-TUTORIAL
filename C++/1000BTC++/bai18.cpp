#include <iostream>
#include <math.h>
using namespace std;

// Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!

int main()
{
    int n, i = 1, x;
    float T = 1, M = 1, N = 1, sum = 1;
    cout << "Enter value n,x: ";
    cin >> n >> x;
    while (i <= n)
    {
        T = pow(x, (i * 2));
        N = i * 2;
        M *= N * (N - 1);
        sum += T / M;
        i++;
    }
    cout << "Sum = " << sum;
}