#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int x)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

Node *InitHead(Node *Head) // Tạo node Head
{
    Head = NULL;
    return Head;
}

Node *AddElement(Node *Head, int x)
{
    Node *temp = createNode(x);
    Head->next = temp;
    return temp;
}

void PrintList(Node *Head) // in danh sách liên kết đơn
{
    Node *p = Head;
    while (p != NULL)
    {
        cout << p->data << "\t";
        p = p->next;
    }
}

Node *Convert(Node *Head, int a, int b)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        if (temp->data == a)
        {
            temp->data = b;
        }
        temp = temp->next;
    }
    return Head;
}

int main()
{
    int n, x, a, b;
    cin >> n;
    cin >> x;
    Node *Head = InitHead(Head);
    Head = createNode(x);
    Node *temp = Head;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        temp = AddElement(temp, x);
    }
    cin >> a >> b;
    Head = Convert(Head, a, b);
    PrintList(Head);
}