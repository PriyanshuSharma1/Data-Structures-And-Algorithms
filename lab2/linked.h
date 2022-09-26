
#ifndef linked_h
#define linked_h

#include <iostream>
using namespace std;
// defining a class for Node
template <class T>
class Node
{
public:
    T info;
    Node *next;
    Node(T info = 0);
};

// defining a class for linked list
template <class T>
class linkedlist
{
public:
    Node<T> *Head;
    Node<T> *Tail;

    linkedlist();
    ~linkedlist();
    bool isEmpty();
    void addtoHead(T info);
    void addtoTail(T info);
    void add(T info, Node<T> *predecessor);
    void removefromHead();
    void remove(T info);
    bool retrieve(T info, Node<T> *&outPtr);
    void traverse();
    bool search(T info);
};
#endif
