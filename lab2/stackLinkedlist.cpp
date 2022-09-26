#include <iostream>
#define MAXSIZE 15
#include "stackLinkedlist.h"
#include "stack.h"

template <class T>
bool stackLinkedlist<T>::isEmpty()
{
    if (this->list.isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
bool stackLinkedlist<T>::isFull()
{
    if (index_top > MAXSIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
void stackLinkedlist<T>::push(T data)
{
    if (!this->isFull())
    {
        index_top += 1;
        list.addtoHead(data);
    }
    else
    {
        cout << " Cannot add more! Stack Overflow" << endl;
    }
}
template <class T>
bool stackLinkedlist<T>::pop(T &value)
{
    if (!list.isEmpty())
    {
        value = this->list.Head->info;

        list.removefromHead();
        return true;
    }
    else
    {
        cout << "Stack Underflow!!" << endl;
        return false;
    }
}
template <class T>
bool stackLinkedlist<T>::top(T &value)
{
    if (!list.isEmpty())
    {
        value = this->list.Head->info;
        return true;
    }
    else
    {
        cout << "The stack is already empty" << endl;
        return false;
    }
}
template <class T>

void stackLinkedlist<T>::traverse()
{
    list.traverse();
}
template class stackLinkedlist<float>;
template class stackLinkedlist<int>;
template class stackLinkedlist<char>;