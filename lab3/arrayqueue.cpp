#include <iostream>
#include "arrayqueue.h"
bool Array::isEmpty()
{
    if (front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Array::isFull()
{
    if (front = (rear + 1) % 5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Array::enqueue(int data)
{
    if (isEmpty())
    {
        front++;
        rear++;
        array[front] = data;
    }
    else if (isFull())
    {
        std::cout << "Data cannot be added. Queue is full!!" << std::endl;
    }
    else
    {
        rear = (rear + 1) % 5;
        array[rear] = data;
    }
}

