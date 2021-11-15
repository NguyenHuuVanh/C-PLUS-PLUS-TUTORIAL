#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, sum = 0, count = 0, flag = 0;
    fstream Bai1_INP, Bai1_OUT;
    do
    {
        cout << "Nhap n>0!: ";
        cin >> n;
    } while (n <= 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i % j == 0) || (i % j != 0))
            {
                cout << i << ",";
            }
        }
    }

    for (int m = 1; m <= n; m++)
    {
        for (int k = 1; k <= m; k++)
        {
            sum += m;
            count++;
            if (count == n)
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

    cout << "\nSUM=" << sum;
    Bai1_INP.open("C:\\Users\\Administrator\\Documents\\Bai1_INP.TXT", ios::in);
    if (Bai1_INP.is_open())
    {
        cout << "\nDoc file thanh cong!" << endl;
        Bai1_INP >> n;
    }
    else
    {
        cout << "\nFile khong ton tai!" << endl;
    }
    Bai1_INP.close();

    Bai1_OUT.open("C:\\Users\\Administrator\\Documents\\Bai1_OUT.TXT", ios::out);
    Bai1_OUT << sum;
    Bai1_OUT.close();
}
