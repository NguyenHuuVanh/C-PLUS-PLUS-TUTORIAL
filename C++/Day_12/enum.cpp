#include <iostream>
using namespace std;

int main()
{
    enum Mycolor
    {
        black,
        blue,
        green,
        cyan,
        red,
        puprle,
        yellow,
        white
    };
    Mycolor mycolor1;
    mycolor1 = Mycolor(2);
    if (mycolor1 == green)
    {
        mycolor1 = red;
    }
    cout << mycolor1;
}