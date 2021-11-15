#include <iostream>
using namespace std;

// Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
int main()
{
    int n;
    cout << "Enter number n: ";
    cin >> n;
    bool Check = true;
    int flag = n;
    int tmp = n;
    int lastnum = n % 10; // lấy ra chữ số cuối
    tmp /= 10;            // bỏ chữ số sau dấu ,
    while (tmp != 0)
    {
        int currenlastnum = tmp % 10;
        tmp /= 10;
        if (lastnum <= currenlastnum)
        {
            Check = false;
            break;
        }
        else
        {
            lastnum = currenlastnum; // cập nhật cho currenlastnum
        }
    }
    if (Check)
    {
        cout << flag << " la chu so tang dan tu trai qua phai!";
    }
    if (Check == false)
    {
        cout << flag << " khong phai la chu so tang dan tu trai qua phai!";
    }
}
