#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int i;

public:
    friend class B; // Có lớp bạn là B
};

class B
{
public:
    void Change(A obj)
    {
        obj.i++;
    }
};

int main()
{
    B b;
    b.Change(1);
}