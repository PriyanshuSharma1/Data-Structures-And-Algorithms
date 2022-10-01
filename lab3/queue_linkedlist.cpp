#include "queue_linkedlist.h"
#include "queue.h"
template <class T>

QueueLinkedList<T>::QueueLinkedList()
{
    top = -1;
}
template <class T>
bool QueueLinkedList<T>::isEmpty()
{
    if (list.isEmpty())
    {
        return true;
    }
    return false;
}
template <class T>
bool QueueLinkedList<T>::isFull()
{
    if (top == MAX)
    {
        return true;
    }
    return false;
}
template <class T>
void QueueLinkedList<T>::enqueue(T data)
{
    if (isEmpty())
    {

        list.addtoHead(data);

        cout << data << " added to queue" << endl;
        top++;
    }
    else if (isFull())
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        list.addtoTail(data);
        cout << data << " added to queue" << endl;

        top++;
    }
}
template <class T>
void QueueLinkedList<T>::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << "Removing From Top" << endl;
        list.removefromHead();
    }
}
template <class T>
void QueueLinkedList<T>::first()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "First element: " << list.Head->info << endl;
    }
}

template <class T>
void QueueLinkedList<T>::last()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Last element: " << list.Tail->info << endl;
    }
}
template <class T>
void QueueLinkedList<T>::traverse()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Displaying contents of Queue" << endl;
        list.traverse();
        cout << endl;
    }
}
template class QueueLinkedList<int>;
