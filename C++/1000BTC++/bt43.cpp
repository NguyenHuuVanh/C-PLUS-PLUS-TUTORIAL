#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;

// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
int main()
{
    char str[32];
    int sum = 0;
    cout << "Nhap so nguyen duong n:";
    cin >> str;
    cout << "So luong chu so la " << strlen(str);
    for (int i = 1; i <= strlen(str); i++)
    {
        // int atoi(str[i]);

        static_cast<int>(str[i]);
        sum += str[i];
    }
    cout << "\nTong cac chu so la " << sum;
}