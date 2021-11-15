#include <iostream>
using namespace std;

class Room
{
private:
    double length;
    double breadth;
    double height;

public:
    void initData(double len, double brth, double hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room member;
    member.initData(25, 9, 2);
    // member.length = 42.5;
    // member.breadth = 30.8; các biến riêng tư không thể gán trực tiếp trong hàm main
    // member.height = 19.2;
    cout << "Lenght * breadth is " << member.calculateArea() << endl;
    cout << "length * breadth * height is " << member.calculateVolume();
}