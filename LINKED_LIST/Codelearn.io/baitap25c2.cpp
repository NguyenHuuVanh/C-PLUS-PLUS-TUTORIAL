#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct list
{
    Node *pHead;
    Node *ptail;
};

void khoitaolist(list &l)
{
    l.pHead = NULL;
    l.ptail = NULL;
}

Node *createNode(int x)
{
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = x;
    return temp;
}

void AddTail(list &l, Node *p)
{
    if (l.pHead == NULL)
    {
        l.pHead = l.ptail = p;
    }
    else
    {
        l.ptail->next = p;
        l.ptail = p;
    }
}

void Convert(list &l)
{
    int a, b;
    cin >> a >> b;
    for (Node *i = l.pHead; i != NULL; i = i->next)
    {
        if (i->data == a)
        {
            i->data = b;
        }
    }
}

void Printlist(list l)
{
    Node *p = l.pHead;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    list l;
    khoitaolist(l);
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Node *p = createNode(x);
        AddTail(l, p);
    }
    Convert(l);
    Printlist(l);
}