#include <bits/stdc++.h>
using namespace std;

class giangvien;
class sinhvien
{
private:
    string name, experience;
    int age;

public:
    sinhvien()
    {
        this->name = "";
        this->experience = "";
        this->age = 0;
    }

    ~sinhvien()
    {
        this->name = "";
        this->experience = "";
        this->age = 0;
    }

    void set()
    {
        cout << "Enter your name: " << endl;
        getline(cin, this->name);
        cout << "Enter your experience: " << endl;
        getline(cin, this->experience);
        cout << "Enter your age: ";
        cin >> this->age;
    }

    friend void get(sinhvien a, giangvien b);
};

class giangvien
{
private:
    string name, experience;
    int age;

public:
    giangvien()
    {
        this->name = "";
        this->experience = "";
        this->age = 0;
    }

    ~giangvien()
    {
        this->name = "";
        this->experience = "";
        this->age = 0;
    }

    void set()
    {
        cout << "Enter your name: " << endl;
        fflush(stdin);
        getline(cin, this->name);
        cout << "Enter your experience: " << endl;
        getline(cin, this->experience);
        cout << "Enter your age: ";
        cin >> this->age;
    }
    friend void get(sinhvien a, giangvien b);
};

void get(sinhvien a, giangvien b)
{
    cout << "The name of students is " << a.name << endl;
    cout << "Experience of students is " << a.experience << endl;
    cout << "Age of students is " << a.age << endl;
    cout << "The name of teacher is " << b.name << endl;
    cout << "Experience of teacher is " << b.experience << endl;
    cout << "Age of teacher is " << b.age << endl;
}

int main()
{
    sinhvien a;
    giangvien b;
    a.set();
    b.set();
    get(a, b);
}

// #include <bits/stdc++.h>
// using namespace std;

// class giangvien;
// class sinhvien
// {
// private:
//     string masinhvien;

// public:
//     sinhvien()
//     {
//         this->masinhvien = "";
//     }
//     ~sinhvien()
//     {
//         this->masinhvien = "";
//     }

//     void set()
//     {
//         cout << "Nhap Ma Sinh Vien";
//         fflush(stdin);
//         getline(cin, this->masinhvien);
//     }

//     friend void get(sinhvien a, giangvien b); // Khai báo hàm bạn trong class
// };

// class giangvien
// {
// private:
//     string magiangvien;

// public:
//     giangvien()
//     {
//         this->magiangvien = "";
//     }
//     ~giangvien()
//     {
//         this->magiangvien = "";
//     }

//     void set()
//     {
//         cout << "Nhap Ma Giang Vien: ";
//         fflush(stdin);
//         getline(cin, this->magiangvien);
//     }

//     friend void get(sinhvien a, giangvien b); // Khai báo hàm bạn trong class
// };

// void get(sinhvien a, giangvien b)
// {
//     cout << "Ma Sinh Vien: " << a.masinhvien << endl;
//     cout << "Ma Giang Vien: " << b.magiangvien << endl;
// }

// int main()
// {
//     sinhvien a;
//     giangvien b;
//     a.set();
//     b.set();
//     get(a, b);
// }
