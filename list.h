#ifndef LIST_H
#define LIST_H
typedef int Data;
namespace dl

{
class DoubleList
{
public:
    DoubleList();
    ~DoubleList();

    void push(Data dt, int position);
    Data pop(int position);

    bool isEmpty();
    void view();
    void clean();
private:
    struct Node
    {
        Data dt;
        Node* next;
        Node* previous;
    } *top,*tail;
};
}

#endif // LIST_H
