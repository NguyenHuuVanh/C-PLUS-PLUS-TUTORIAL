#include <iostream>
using namespace std;

int main()
{
    char str[25];
    cout << "Enter fullname: ";
    fgets(str, sizeof(str), stdin);
    cout << "Your name is: " << str << "\n";
}