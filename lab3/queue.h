
#pragma once    

template <typename T>
class Queue 
{
private:
    int *info;
    int front;
    int rear;
    int maxQueueSize;
public:
    Queue(int maxQueueSize);

    ~Queue() { delete[] info; }

    bool isEmpty() const;

    bool isFull() const;

    void enqueue(const T element);

    bool dequeue(T &element);

    bool firstElement(T &element) const;

    bool back(T &element) const;
};

#include "circ_queue.cpp"