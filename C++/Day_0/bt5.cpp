#include <iostream>
using namespace std;
int main()
{
    int n, dem = 0, sum = 0;
    cout << "nhap n: ";
    cin >> n;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += i;
            dem++;
            if (dem == n)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    cout << sum;
}
