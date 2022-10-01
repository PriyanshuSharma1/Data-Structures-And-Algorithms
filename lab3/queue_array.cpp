#include "queue_array.h"
#include "queue.h"
template <class T>
QueueArray<T>::QueueArray()
{
    this->front = -1;
    this->rear = -1;
}
template <class T>

bool QueueArray<T>::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
template <class T>
void QueueArray<T>::enqueue(T data)
{
    if (isEmpty())
    {
        front++;
        rear++;
        arr[rear] = data;
        cout << data << " added to queue" << endl;
    }
    else if (isFull())
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        rear++;
        arr[rear] = data;
        cout << data << " added to queue" << endl;
    }
}
template <class T>

void QueueArray<T>::dequeue()
{
    if (front == rear)
    {
        front = rear = -1;
    }
    else if (isEmpty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        front++;
    }
}
template <class T>
void QueueArray<T>::first()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "First element: " << arr[front] << endl;
    }
}

template <class T>
void QueueArray<T>::last()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Last element: " << arr[rear] << endl;
    }
}
template <class T>
void QueueArray<T>::traverse()
{
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Displaying the contents of queue" << endl;
        for (int i = front; i < rear + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

template <class T>
bool QueueArray<T>::isFull()
{
    if (rear == MAX - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
