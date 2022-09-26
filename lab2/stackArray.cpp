
#include <iostream>

#include "stackArray.h"
template <class T>
stackArray<T>::stackArray()
{
    index_top = -1;
}
template <class T>
bool stackArray<T>::isFull()
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
bool stackArray<T>::isEmpty()
{
    if (index_top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
void stackArray<T>::push(T data)
{

    if (!this->isFull())
    {
        index_top += 1;
        info[index_top] = data;
    }
    else
    {
        cout << "Stack Overflow!" << endl;
    }
}
template <class T>
bool stackArray<T>::top(T &data)
{
    if (!this->isEmpty())
    {
        data = info[index_top];
        return true;
    }
    else
    {
        cout << "Stack is Empty!" << endl;
        return false;
    }
}
template <class T>
bool stackArray<T>::pop(T &data)
{
    if (!this->isEmpty())
    {
        index_top--;
        data = info[index_top];
        return true;
    }
    else
    {
        cout << "The stack is empty" << endl;
        return false;
    }
}
template class stackArray<char>;
template class stackArray<int>;
template class stackArray<float>;