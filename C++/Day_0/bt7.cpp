#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;
    else
    {
        return (n * factorial(n - 1));
    }
}

/*
Giải thích :
giả sử n=5
B1: 5*factorial(4)
B2: 5*4*factorial(3)
B3: 5*4*3*factorial(2)
B4: 5*4*3*2*factorial(1)
B5: 5*4*3*2*1
*/

int main()
{
    int n, sum = 0;
    cout << "Nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    cout << sum;
    return 0;
}