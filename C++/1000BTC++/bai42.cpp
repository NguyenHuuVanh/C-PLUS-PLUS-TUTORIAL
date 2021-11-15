#include <iostream>
using namespace std;

// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k)  < n.
// Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
int main()
{
    int n, k, sum = 0, index = 0;
    cout << "Nhap n,k:";
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        sum += i;
        if (sum < n)
        {
            index++;
        }
    }
    cout << "Gia tri lon nhat cua k la " << index;
}