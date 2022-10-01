#include <iostream>
using namespace std;
#define MAX 5
template <class T>
class Queue
{
private:
    int rear;
    int front;

public:
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void enqueue(T data) = 0;
    virtual void dequeue() = 0;
    virtual void traverse() = 0;
    virtual void first() = 0;
    virtual void last() = 0;
};