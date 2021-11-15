#include <bits/stdc++.h>
using namespace std;

class Point
{
private:
    int x, y, Length, length, height;

public:
    Point(int x1, int y1, string name, int age)
    {
        x = x1;
        y = y1;
        cout << name << endl;
        cout << age << endl;
    }

    // Hàm khởi tạo sao chép
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }
    Point()
    {
        Length = 25;
        cout << "Length is " << Length << endl;
    }
    Point(float len, float hgt)
    {
        length = len;
        height = hgt;
    }
    Point(Point &copy)
    {
        length = copy.length;
        height = copy.height;
    }

    int getX() { return x; }
    int getY() { return y; }
    float CaculatuteArea()
    {
        return length * height;
    }
};

int main()
{
    Point p1(10, 15, "Viet Anh", 19); // Hàm khởi tạo có tham số thông thường
    Point p2 = p1;                    // hàm khởi tạo sao chép được gọi ở đây

    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY() << endl;
    cout << "p2.x = " << p2.getX() << ", p2.y = " << p2.getY() << endl;
    Point Length25;
    Point point1(25, 9);
    Point Point2(25.9, 2002.2002);
    Point Point3 = point1;
    Point Point4 = Point2;
    cout << point1.CaculatuteArea() << endl;
    cout << Point2.CaculatuteArea() << endl;
    cout << "------Copyted---------" << endl;
    cout << Point3.CaculatuteArea() << endl;
    cout << Point4.CaculatuteArea() << endl;

    return 0;
}