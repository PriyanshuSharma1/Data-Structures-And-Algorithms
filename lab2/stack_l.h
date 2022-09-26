#pragma once
#include "stack.h"
#include "linkedlist.h"
template <class T>
class linkedlistStack : public stack<T>
{
private:
    linkedlist<T> list;

public:
    virtual void push(T data)
    {
        list.addToHead(data);
    }

    virtual int pop()
    {
        // list.isEmpty();
        return list.removeFromHead();
    }

    virtual int top()
    {
        return list.getHead();
    }
    virtual void traverse()
    {
        return list.traverse();
    }

    virtual ~linkedliststack() {}
};