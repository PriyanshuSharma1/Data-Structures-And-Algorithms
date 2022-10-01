#include <iostream>
#include "linkedlist.h"
#include "queue.h"
#include "queue_array.h"
#include "queue_linkedlist.h"
#include "circular_queue_array.h"
using namespace std;
int main()
{
    cout << endl;
    cout << "Queue Implementing Linked List" << endl;
    cout << "____________________________________" << endl;
    cout << endl;
    cout << "Adding data" << endl;

    Queue<int> *q = new QueueLinkedList<int>();
    q->enqueue(4);
    q->enqueue(3);
    q->enqueue(8);
    cout << "-----------------------------" << endl;
    q->traverse();
    q->dequeue();
    q->dequeue();
    q->traverse();
    cout << "-----------------------------" << endl;

    q->enqueue(34);
    q->enqueue(46);
    q->enqueue(25);
    q->enqueue(46);
    q->enqueue(25);
    cout << "-----------------------------" << endl;

    q->traverse();
    cout << "-----------------------------" << endl;

    q->first();
    q->last();
    delete q;
}
template class QueueLinkedList<int>;
