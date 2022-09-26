#include <iostream>
#include "linkedlist.h"

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
    Node<T> t1 = *Head;
    Node<T> t2 = *Head;
    while (t2 != NULL)
    {
        t2 = t2->next;
        delete t1;
        t1 = t2
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
    if (Head == NULL)
    {
        Head = Tail = newNode;
    }
    Node<T> *newNode = new Node;
    newNode->info = data;
    newNode->next = Head->next;
    Head = newNode;
}

template <class T>
void linkedlist<T>::addtoTail(T data)
{
    node<T> *newNode = new node<T>;
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
    node<T> *temp = Head;
    while (temp != NULL)
    {
        cout << "The data is :" << temp->info << "\n";
        temp = temp->next;
    }
}
template <class T>
void linkedlist<T>::removefromHead()
{
    if (!isEmpty())
    {
        Node<T> *NodeDlt = Head;
        Head = Head->next;
        delete NodeDlt;
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
            Node<T> *temp1 = Head;
            Node<T> *temp2 = Head->next;
            while (temp2 != NULL)
            {
                if (temp2->info == data)
                {
                    break;
                }
                temp2 = temp2->next;
                temp1 = temp1->next;
            }
            if (temp2 != NULL)
            {
                temp1->next = temp2->next;
                delete temp2;
                if (temp1->next == NULL)
                {
                    Tail = temp1;
                }
            }
        }
    }
}
template <class T>
bool linkedlist<T>::retrieve(T data, Node<T> *&OutPtr)
{
    Node<T> *temp = Head;
    while (temp != NULL)
    {
        if (temp->info == data)
        {

            OutPtr = temp;
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
template class linkedlist<char>;
template class linkedlist<int>;
template class linkedlist<float>;
