#include <iostream>
using namespace std;

/*
Tính tổng S=1+1/3+...+1/(2n+1)

float Tong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return Tong(n - 1) + 1.0 / (2 * n - 1);
    }
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "Ket qua = " << Tong(n);
}
*/
/*
Tính s=1/2+2/3+...+n/n+1

float Tong(int n)
{
    if (n == 1)
    {
        return 0.5;
    }
    else
    {
        return Tong(n - 1) + (n / (float)(n + 1));
    }
}
int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    cout << "Ket qua = " << Tong(n);
}
*/

// int Uoc(int a, int b)
//{
/*
cách 1:
    if (a * b == 0)
    {
        return a + b;
    }
    else
    {
        return (a > b) ? Uoc(a % b, b) : Uoc(a, b % a);
    }
*/
/*
cách 2:
 if ((a == b) || (a != 0 && b == 0))
 {
     return a;
 }
 else if (a == 0 && b != 0)
 {
     return b;
 }
 else
 {
     return a > b ? Uoc(a - b, b) : Uoc(a, b - a);
 }
 */
//}
// int main()
// {
//     int a, b;
//     cout << "Nhap a va b:";
//     cin >> a >> b;
//     cout << "Ket qua = " << Uoc(a, b);
// }
