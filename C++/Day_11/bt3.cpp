#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Nhap n: ";
    cin >> n;
    cin >> key;
    switch (key)
    {
    case 1:
        cout << "Mot" << endl;
        break;
    case 2:
        cout << "Hai" << endl;
        break;
    case 3:
        cout << "Ba" << endl;
        break;
    case 4:
        cout << "Bon" << endl;
        break;
    case 5:
        cout << "Nam" << endl;
        break;
    case 6:
        cout << "Sau" << endl;
        break;
    case 7:
        cout << "Bay" << endl;
        break;
    case 8:
        cout << "Tam" << endl;
        break;
    case 9:
        cout << "Chin" << endl;
        break;
    default:
        cout << "Khong doc duoc!" << endl;
        break;
    }
}