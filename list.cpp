#include "list.h"
#include <iostream>

using namespace std;
using namespace dl;

DoubleList :: DoubleList():
    top(nullptr),
    tail(nullptr)
{

}
DoubleList :: ~DoubleList()
{
    clean();
}
void DoubleList :: push(Data dt, int position)
{
    Node* p = nullptr;
    Node* r = nullptr;
    p = new Node;
    r = top;
    if (top == nullptr && tail == nullptr)
    {
        p -> next = p;
        p -> previous = p;
        top = p;
        tail = p;
    }
    else
    {
        for (int i = 0; i < position; ++i)
        {
            r = r -> next;
        }
        r -> previous -> next = p;
        r -> previous = p;
        p -> next = r;
        p -> previous = r -> previous;
        p -> dt = dt;
    }
}
Data DoubleList :: pop(int position)
{
    Data data;
    Node* r = nullptr;
    r = top;
    for (int i = 0; i < position; ++i )
    {
        r = r -> next;
    }
    data = r -> dt;
    r -> previous -> next = r -> next;
    r -> next -> previous = r -> previous;
    delete r;
    r = nullptr;

    return data;
}
bool DoubleList :: isEmpty()
{
    return (top && tail);
}
void DoubleList :: clean()
{
    Node* p = nullptr;
    p = tail;
    if (top == nullptr)
    {
        return ;
    }
    else
    {
        while(tail)
        {
            p = tail -> previous;
            delete tail;
            tail = p;
        }
        top = nullptr;
        tail = nullptr;
    }
}
void DoubleList :: view()
{
    Node *p = nullptr;
    p = tail;
    while(p)
    {
        cout << p -> dt << endl;
        p = p -> previous;
    }
}



