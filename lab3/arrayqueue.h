#include <iostream>
class Queue
{
private:
    /* data */
public:
    Queue();
    virtual void enqueue(int data);
    virtual int dequeue();
    virtual void print();
    virtual void isEmpty();
    virtual void isFull();

    ~Queue();
};

class Array
{
public:
    int array[5];
    virtual void enqueue(int data);
    virtual int dequeue();
    virtual void print();
    virtual bool isEmpty();
    virtual bool isFull();

private:
    int front;
    int rear;
};