#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    // if (n == 1 || n == 2)
    //     return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n, sum = 0;
    cout << "nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += Fibonacci(i);
    }
    cout << "So Fibonacci thu " << n << " la: " << Fibonacci(n) << endl;
    cout << "Tong Fibonaci la " << sum;
    return 0;
}