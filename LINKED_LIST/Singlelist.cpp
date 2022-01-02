#include <iostream>
using namespace std;

struct NODE
{
    int data;
    NODE *next;
};

NODE *createNode(int value)
{
    NODE *temp;
    temp = new NODE();  // cấp phất bộ nhớ động
    temp->next = NULL;  // con trỏ next của temp trỏ tới NULL vì ban đầu list đang rỗng
    temp->data = value; // Gán giá trị cho node
    return temp;        // Trả về node mới đã có giá trị
}

NODE *InitHead(NODE *Head)
{
    Head = NULL;
    return Head;
}

/*
Thêm vào đầu
Việc thêm vào đầu chính là việc cập nhật lại thằng head. Ta gọi Node mới(temp), ta có:

Nếu head đang trỏ tới NULL, nghĩa là linked list đang trống, Node mới thêm vào sẽ làm head luôn

Ngược lại, ta phải thay thế thằng head cũ bằng head mới. Việc này phải làm theo thứ tự như sau:

1.Cho next của temp trỏ tới head hiện hành

2.Đặt temp làm head mới
*/

NODE *addHead(NODE *Head, int value)
{
    NODE *temp = createNode(value); // Khởi tạo node Head với temp=data
    if (Head == NULL)
    {
        Head = temp; // Nếu linked list đang trống thì Node temp là head luôn
    }
    else
    {
        temp->next = Head; // Trỏ next của temp = Head hiện tại
        Head = temp;       // Đổi Head hiện tại = temp(Vì temp bây giờ là head mới mà)
    }
    return Head;
}
/*
Thêm vào cuối

Chúng ta sẽ cần Node đầu tiên, và giá trị muốn thêm. Khi đó, ta sẽ:

1.Tạo một Node mới với giá trị value

2.Nếu head = NULL, tức là danh sách liên kết đang trống. Khi đó Node mới(temp) sẽ là head luôn.

3.Ngược lại, ta sẽ duyệt tới Node cuối cùng(Node có next = NULL), và trỏ next của thằng cuối tới Node mới(temp).
*/

NODE *addTail(NODE *Head, int value)
{
    NODE *temp, *p;           // Khai báo 2 node tạm temp và p
    temp = createNode(value); // Gọi hàm createNode để khởi tạo node temp có next trỏ tới NULL và giá trị là value
    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        p = Head;               // Khởi tạo p trỏ tới head
        while (p->next != NULL) // Duyệt danh sách liên kết đến cuối. Node cuối là node có next = NULL
        {
            p = p->next;
        }
        p->next = temp;
    }
    return Head;
}

NODE *addsomeWhere(NODE *Head, int value, int position)
{
    if (position == 0 || Head == NULL)
    {
        Head = addHead(Head, value); // Nếu vị trí chèn là 0, tức là thêm vào đầu
    }
    // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
    else
    {
        int k = 1;
        NODE *p = Head;
        while (p != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            // Nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định chèn cuối
            // Nếu bạn không muốn chèn, hãy thông báo vị trí chèn không hợp lệ
            Head = addTail(Head, value);
        }
        else
        {
            NODE *temp = createNode(value);
            temp->next = p->next;
            p->next = temp;
        }
    }
    return Head;
}

NODE *DelHead(NODE *Head)
{
    if (Head == NULL)
    {
        cout << "Khong co gi de xoa!";
    }
    else
    {
        Head = Head->next;
    }
    return Head;
}

NODE *DelTail(NODE *Head)
{
    if (Head == NULL || Head->next == NULL)
    {
        return DelHead(Head);
    }
    NODE *p = Head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    p->next = p->next->next; // Cho next bằng NULL
    //  Hoặc viết p->next = NULL cũng được
    // p->next = NULL;
    return Head;
}

NODE *Delsomewhere(NODE *Head, int position)
{
    if (position == 0 || Head == NULL || Head->next == NULL)
    {
        Head = DelHead(Head); // Nếu vị trí chèn là 0, tức là xoá đầu
    }
    else
    {
        // Bắt đầu tìm vị trí cần chèn. Ta sẽ dùng k để đếm cho vị trí
        int k = 1;
        NODE *p = Head;
        while (p->next->next != NULL && k != position)
        {
            p = p->next;
            k++;
        }
        if (k != position)
        {
            Head = DelTail(Head); // Nếu duyệt đến cuối danh sách mà vẫn chưa tìm được
            // ta sẽ xoá phần tử cuối hoặc thông báo không tìm thấy
        }
        else
        {
            p->next = p->next->next;
        }
    }
    return Head;
}

// Hàm lấy giá trị ở chỉ số bất kì
int Get(NODE *Head, int index)
{
    int k = 0;
    NODE *p = Head;
    while (p->next != NULL && k != index)
    {
        k++;
        p = p->next;
    }
    return p->data;
}

// Hàm tìm kiếm phần tử
// Hàm tìm kiếm này sẽ trả về chỉ số của Node đầu tiên có giá trị bằng với giá trị cần tìm. Nếu không tìm thấy, chúng ta trả về -1.
int Search(NODE *Head, int value)
{
    int position = 0;
    for (NODE *p = Head; p->next != NULL; p = p->next)
    {
        if (p->data == value)
        {
            return position;
        }
        position++;
    }
    return -1;
}

// Chúng ta có thể sử dụng hàm này để xóa tất cả các Node trong danh sách liên kết có giá trị chỉ định như sau:
NODE *Delvalue(NODE *Head, int value)
{
    int position = Search(Head, value);
    while (position != -1)
    {
        Delsomewhere(Head, position);
        position = Search(Head, value);
    }
    return Head;
}

NODE *Change(NODE *Head, int value, int position)
{
    if (Head == NULL)
    {
        cout << "Khong co gi de sua! ";
    }
    else
    {
        NODE *p = Head;
        if (position == 1)
        {
            Head->data = value; // Sửa luôn nốt đầu tiên
        }
        else
        {
            for (int i = 0; i < position - 1; i++)
            {
                if (p == NULL) // Nếu p là vị trí cuối cùng
                {
                    cout << "Vi tri " << position << " khong hop le!";
                }
                p = p->next;
            }
            p->data = value;
        }
    }
    return Head;
}

NODE *Sapxep(NODE *Head)
{
    int value;
    NODE *p, *temp;
    if (Head == NULL)
    {
        cout << "Danh sach trong! ";
        return Head;
    }
    p = Head;
    while (p != NULL)
    {
        for (temp = p->next; temp != NULL; temp = temp->next) // temp là node kế tiếp
        {
            if (temp->data < p->data)
            {
                value = p->data;
                p->data = temp->data;
                temp->data = value;
            }
        }
        p = p->next;
    }
    return Head;
}

NODE *input()
{
    NODE *Head = InitHead(Head);
    int n, value;
    cout << "Nhap so luong node:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri:";
        cin >> value;
        Head = addTail(Head, value);
    }
    return Head;
}

void output(NODE *Head)
{
    for (NODE *p = Head; p != NULL; p = p->next)
    {
        cout << p->data << "\t";
    }
}

int main()
{
    cout << "xuat danh sach phan tu " << endl;
    NODE *p = input();
    cout << "\nXuat danh sach " << endl;
    output(p);
    int m, n;
    cout << "\n------- Them vao mot node ----------" << endl;
    cout << "\nNhap gia tri can them:";
    cin >> m;
    cout << "Nhap vi tri muon them:";
    cin >> n;
    addsomeWhere(p, m, n);
    cout << "Xuat danh sach sau khi them " << endl;
    output(p);
    cout << "\nXoa dau " << endl;
    DelHead(p);
    output(p);
    cout << "\nXoa cuoi " << endl;
    DelTail(p);
    output(p);
    cout << " \nXoa o vi tri bat ki " << endl;
    int k;
    cout << "\nNhap vi tri muon xoa:";
    cin >> k;
    Delsomewhere(p, k);
    output(p);
    cout << "\nLay gia tri o vi tri bat ky " << endl;
    int a;
    cout << "Nhap vi tri:";
    cin >> a;
    cout << Get(p, a);
    cout << "\nTim kiem phan tu " << endl;
    int x;
    cout << "Nhap gia tri can tim:";
    cin >> x;
    cout << Search(p, x);
    cout << "\nXoa tat ca cac gia tri chi dinh ";
    int y;
    cout << "Nhap gia tri can xoa:";
    cin >> y;
    Delvalue(p, y);
    output(p);
    cout << "\nThay doi mot node ";
    int l, s;
    cout << "Nhap gia tri node can thay doi:";
    cin >> l;
    cout << "Nhap vi tri Node:";
    cin >> s;
    Change(p, l, s);
    output(p);
    cout << "\nSap xep cac node tang dan " << endl;
    Sapxep(p);
    output(p);
}
