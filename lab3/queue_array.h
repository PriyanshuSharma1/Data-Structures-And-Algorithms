#include "queue.h"
#pragma once
template <class T>
class QueueArray : public Queue<T>
{
private:
    int front;
    int rear;
    T arr[MAX];

public:
    QueueArray();
    ~QueueArray();
    virtual bool isEmpty();
    virtual bool isFull();
    virtual void enqueue(T data);
    virtual void dequeue();
    virtual void traverse();
    virtual void first();
    virtual void last();
};