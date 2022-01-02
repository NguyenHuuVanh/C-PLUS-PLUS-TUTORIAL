#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct SV
{
    string name, sex;
    int age, height, weight;
};

struct Node
{
    SV data;
    Node *next;
};

struct List
{
    Node *Head;
    Node *Tail;
};

void CreatList(List &l)
{
    l.Head = l.Tail = NULL;
}

Node *CreatNode(SV x)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

void AddHead(List &l, Node *p) // Hàm thêm vao đầu danh sách
{
    if (l.Head == NULL)
    {
        l.Head = l.Tail = p;
    }
    else
    {
        p->next = l.Head;
        l.Head = p;
    }
}

void AddTail(List &l, Node *p) // Hàm thêm cuối
{
    if (l.Head == NULL) // nếu dnah sách rỗng
    {
        l.Head = l.Tail = p;
    }
    else
    {
        l.Tail->next = p;
        l.Tail = p;
    }
}

void DelHead(List &l)
{
    if (l.Head == NULL)
    {
        cout << "Khong co gi de xoa het!";
    }
    l.Head = l.Head->next;
}

void DelTail(List &l)
{
    if (l.Head == NULL)
    {
        DelHead(l);
    }
    for (Node *p = l.Head; p != NULL; p = p->next)
    {
        if (p->next == l.Tail)
        {
            delete l.Tail;
            p->next = NULL;
            l.Tail = p;
        }
    }
}

void Delsomeone(List &l)
{
    int position;
    cout << "Nhap vi tri can xoa:";
    cin >> position;
    if (position == 0 || l.Head == NULL)
    {
        DelHead(l); // tức là Xoá đầu
    }
    int k = 1;
    Node *p = l.Head;
    while (p->next->next != NULL && k != position)
    {
        p = p->next;
        k++;
    }
    if (k != position)
    {
        DelTail(l); // Nếu không tìm được vị trí cần xoá tức là xoá cuối
    }
    else
    {
        p->next = p->next->next;
    }
}

void Addsomeone(List &l, SV &x, int position)
{
    Node *p = l.Head;
    cout << "Nhap thong tin sinh vien can them " << endl;
    cout << "Ten: ";
    getline(cin, x.name);
    cin.ignore();
    cout << "Gioi tinh: ";
    getline(cin, x.sex);
    cin.ignore();
    cout << "Tuoi:";
    cin >> x.age;
    cout << "Chieu cao:";
    cin >> x.height;
    cout << "Can nang:";
    cin >> x.weight;
    cout << "Nhap vi tri muon them:";
    cin >> position;
    if (position == 0 || l.Head == NULL)
    {
        AddHead(l, p->data); // Nếu vị trí thêm = 0 tức là thêm đầu
    }
    // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
    else
    {
        int k = 1;
        while (p != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            AddTail(l, p); // Nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định chèn cuối
            // Nếu bạn không muốn chèn, hãy thông báo vị trí chèn không hợp lệ
        }
    }
}

void input(List &l, int n)
{
    SV x;
    CreatList(l); // Tạo ra list mới
    for (int i = 0; i < n; i++)
    {
        cout << "Ten: ";
        getline(cin, x.name);
        cin.ignore();
        cout << "Gioi tinh: ";
        getline(cin, x.sex);
        cin.ignore();
        cout << "Tuoi:";
        cin >> x.age;
        cout << "Chieu cao:";
        cin >> x.height;
        cout << "Can nang:";
        cin >> x.weight;
        Node *p = CreatNode(x); // Tạo node mới
        AddTail(l, p);          // Hàm thêm vào cuối
    }
}

void output(List l)
{
    for (Node *i = l.Head; i != NULL; i = i->next)
    {
        cout << "__________________________________________" << endl;
        cout << "Ten: " << i->data.name << endl;
        cout << "Gioi tinh: " << i->data.sex << endl;
        cout << "Tuoi: " << i->data.age << endl;
        cout << "Chieu cao: " << i->data.height << endl;
        cout << "Can nang: " << i->data.weight << endl;
    }
}

int main()
{
    List l;
    int n;
    cout << "Nhap so luong sinh vien:";
    cin >> n;
    input(l, n);
    output(l);
    cout << "Xoa sinh vien dau" << endl;
    DelHead(l);
    output(l);
    cout << "Xoa sinh vien cuoi" << endl;
    DelTail(l);
    output(l);
    cout << "Xoa sinh vien co vi tri bat ki!" << endl;
    Delsomeone(l);
    output(l);
}
