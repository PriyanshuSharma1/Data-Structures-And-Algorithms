#include "queue.h"
#pragma once
template <class T>
class QueueLinkedList : public Queue<T>
{
public:
    QueueLinkedList();
    void enqueue(T data);
    void dequeue();
    bool isEmpty();
    bool isFull();
    void first();
    void last();
    void traverse();

private:
    linkedlist<T> list;
    int top;
};