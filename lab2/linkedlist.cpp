#include <iostream>
#include "linked.h"

using namespace std;

template <class T>
Node<T>::Node(T data)
{
    info = data;
    next = NULL;
}
template <class T>
linkedlist<T>::linkedlist()
{
    Head = NULL;
    Tail = NULL;
}
template <class T>
linkedlist<T>::~linkedlist()
{
    Node<T> *t1 = Head;
    Node<T> *t2 = Head;
    while (t1 != NULL)
    {
        t1 = t1->next;
        delete t2;
        t2 = t1;
    }
}
template <class T>
bool linkedlist<T>::isEmpty()
{
    if (Head == NULL)
    {
        return true;
    }
    return false;
}
template <class T>
void linkedlist<T>::addtoHead(T data)
{
    Node<T> *newNode = new Node<T>;
    newNode->info = data;
    newNode->next = Head;
    Head = newNode;
    if (Tail == NULL)
    {
        Tail = Head;
    }
}
template <class T>
void linkedlist<T>::addtoTail(T data)
{
    Node<T> *newNode = new Node<T>;
    newNode->info = data;
    newNode->next = NULL;
    Tail->next = newNode;
    Tail = newNode;
}
template <class T>
void linkedlist<T>::add(T data, Node<T> *predecessor)
{
    Node<T> *newNode = new Node<T>;
    newNode->info = data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}
template <class T>
void linkedlist<T>::traverse()
{
    Node<T> *t1 = Head;
    while (t1 != NULL)
    {
        cout << t1->info << "   ";
        t1 = t1->next;
    }
}
template <class T>
void linkedlist<T>::removefromHead()
{
    if (!isEmpty())
    {
        Node<T> *Node;
        Node = Head;
        Head = Head->next;
        delete Node;
        if (Head == NULL)
        {
            Tail = NULL;
        }
    }
}
template <class T>
void linkedlist<T>::remove(T data)
{
    if (!isEmpty())
    {
        if (Head->info == data)
        {
            removefromHead();
        }
        else
        {
            Node<T> *t1 = Head;
            Node<T> *t2 = Head->next;
            while (t2 != NULL)
            {
                if (t2->info == data)
                {
                    break;
                }
                t2 = t2->next;
                t1 = t1->next;
            }
            if (t2 != NULL)
            {
                t1->next = t2->next;
                delete t2;
                if (t1->next == NULL)
                {
                    Tail = t1;
                }
            }
        }
    }
}
template <class T>
bool linkedlist<T>::retrieve(T data, Node<T> *&outPtr)
{
    Node<T> *temp = Head;
    while (temp != NULL)
    {
        if (temp->info == data)
        {

            outPtr = temp;
            return true;
        }
        temp = temp->next;
    }
    return false;
}
template <class T>
bool linkedlist<T>::search(T data)
{
    Node<T> *temp = Head;
    while (temp != NULL)
    {
        if (temp->info == data)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

template class linkedlist<int>;
template class linkedlist<char>;
template class linkedlist<float>;