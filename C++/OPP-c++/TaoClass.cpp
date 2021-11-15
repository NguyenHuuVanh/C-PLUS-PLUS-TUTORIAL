#include <iostream>
using namespace std;

class sinhvien
{
private:
    string ten, masv;
    int tuoi;
    float DT, Dl, DH;

public:
    sinhvien()
    {
        this->ten = "";
        this->masv = "";
        this->tuoi = 0;
        this->DT = this->Dl = this->DH = 0;
    }

    ~sinhvien()
    {
        this->ten = "";
        this->masv = "";
        this->tuoi = 0;
        this->DT = this->Dl = this->DH = 0;
    }

    void set()
    {
        // fflush(stdin);
        cout << "Nhap ten sinh vien: " << endl;
        getline(cin, this->ten);
        cout << "Nhap ma sinh vien: " << endl;
        getline(cin, this->masv);
        cout << "Nhap tuoi sinh vien: " << endl;
        cin >> this->tuoi;
        cout << "Nhap diem toan ly hoa:" << endl;
        cin >> this->DT >> this->Dl >> this->DH;
    }

    void get()
    {
        cout << "Ten sinh vien la " << this->ten << endl;
        cout << "Ma sinh vien la " << this->masv << endl;
        cout << "Tuoi sinh vien la " << this->tuoi << endl;
        cout << "Diem trung binh cua sinh vien la " << TB() << endl;
    }
    float TB()
    {
        return (this->DT + this->Dl + this->DH) / 3;
    }
};

int main()
{
    sinhvien sv;
    cout << "Before set" << endl;
    sv.get();
    sv.set();
    cout << "After set" << endl;
    sv.get();
}
