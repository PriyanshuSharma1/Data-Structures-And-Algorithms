#include "queue.h"
#include "circular_queue_array.h"
template <class T>
QueueCircularArray<T>::QueueCircularArray()
{
    this->front = -1;
    this->rear = -1;
}
template <class T>

bool QueueCircularArray<T>::isEmpty()
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
void QueueCircularArray<T>::enqueue(T data)
{
    if (isEmpty())
    {
        front++;
        rear++;
        arr[rear] = data;
        cout << "data added" << endl;
    }
    else if (isFull())
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        rear = (rear + 1) % MAX;
        arr[rear] = data;
        cout << "data added" << endl;
    }
}
template <class T>

void QueueCircularArray<T>::dequeue()
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
        front = (front + 1) % MAX;
    }
}
template <class T>
void QueueCircularArray<T>::first()
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
void QueueCircularArray<T>::last()
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
void QueueCircularArray<T>::traverse()
{
    cout << "Displaying the contents of Queue" << endl;
    if (front == rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front <= rear)
    {
        for (int i = front; i < rear + 1; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        int i = front;
        while (i < MAX)
        {
            cout << arr[i] << " ";
            i++;
        }
        i = 0;
        while (i <= rear)
        {
            cout << arr[i] << " ";
            i++;
        }
    }
    cout << endl;
}

template <class T>
bool QueueCircularArray<T>::isFull()
{
    if (front == (rear + 1) % MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}