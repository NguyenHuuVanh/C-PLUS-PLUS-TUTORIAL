#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *creatNode(int x)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

Node *InitHead(Node *Head)
{
    Head = NULL;
    return Head;
}

Node *AddTail(Node *Head, int value)
{
    Node *temp, *p;
    temp = creatNode(value);
    if (Head == NULL)
    {
        Head = temp;
    }
    else
    {
        p = Head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
    }
    return Head;
}

void Printlist(Node *Head)
{
    for (Node *p = Head; p != NULL; p = p->next)
    {
        cout << p->data << " ";
    }
}

void Delvalue(Node *Head, int &value)
{
    Node *p = Head;
    for (int i = 0; i < value; i++)
    {
        p = p->next; // truy xuất tại vị trí k
    }
    while (Head != NULL)
    {
        if (Head->data > p->data)
        {
            Head = Head->next;
        }
        else
        {
            cout << Head->data << " ";
            Head = Head->next;
        }
    }
}

int main()
{
    int n, x, value;
    cin >> n;
    Node *Head = InitHead(Head);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Head = AddTail(Head, x);
    }
    cin >> value;
    Delvalue(Head, value);
}