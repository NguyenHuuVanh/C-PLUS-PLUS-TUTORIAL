#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Chu nhat";
        break;
    case 2:
        cout << "Thu hai";
        break;
    case 3:
        cout << "Thu ba";
        break;
    case 4:
        cout << "Thu tu";
        break;
    case 5:
        cout << "Thu nam";
        break;
    case 6:
        cout << "Thu sau";
        break;
    case 7:
        cout << "Thu bay";
        break;
    default:
        cout << "Khong phai thu trong tuan!";
        break;
    }
}