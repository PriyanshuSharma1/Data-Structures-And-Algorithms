#include <iostream>
#include "queue.h"

template <typename T>
Queue<T>::Queue(int size ):
    maxQueueSize(size),
    front(0),
    rear(0),
    info(new int[size])
{}

template <typename T>
bool Queue<T>::isEmpty() const
{
    // std::cout<<"Queue Empty\n";
    return rear == front;
}

template <typename T>
bool Queue<T>::isFull() const 
{
    return front == (rear + 1) % maxQueueSize;
}

template <typename T>
void Queue<T>::enqueue(const T element)
{
    if (isFull())
    {   
        std::cout << "Queue Overflow -> Queue Full\n";             
    }
    else
    {
        rear = (rear + 1) % maxQueueSize;
        // std::cout  << rear << " rear_position\n";            
        info[rear] = element;
        std::cout << info[rear]<<" Added in Queue\n";
    }
}

template <typename T>
bool Queue<T>::dequeue(T &element)
{
    if (!isEmpty())
    {
        front = (front + 1) % maxQueueSize;
        // std::cout  << front << " front_position\n";
        element  = info[front];
        std::cout  << element << " dequeued\n";
        
        return true;
    }
    else
    {
        std::cout << "Queue Overflow -> Queue Empty\n";
        return false;
    }
    
}

template <typename T>
bool Queue<T>::firstElement(T &element) const
{
    if (!isEmpty())
    {
        element  = info[front+1];
        // std::cout  << "\n\n " <<front << "front_position\n\n";
        std::cout  << element << " is Element at front\n";
        return true;
    }
    else
    {
        std::cout << "Queue Empty\n";
        return false;
    }
}

template <typename T>
bool Queue<T>::back(T &element) const
{
    if (!isEmpty())
    {
        element  = info[rear];
        std::cout  << element << " is Element at rear\n";
        return true;
    }
    else
    {
        std::cout << "Queue Empty";
        return false;
    }
}

