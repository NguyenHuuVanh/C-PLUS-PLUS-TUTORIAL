#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, sum = 0;
    do
    {
        cout << "Nhap n>0!:";
        cin >> n;
    } while (n <= 0 || n >= 50);

    for (int i = 1; i < n; i++)
    {
        int dem = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                dem++;
            }
        }
        if (dem == 0 && i > 1)
        {
            cout << i << "  ";
            sum += i;
        }
    }
    cout << "\nTong la " << sum << endl;
}
