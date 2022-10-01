
#pragma once
template <class T>
class Node
{
public:
    T info;
    Node *next;
    Node(T info = 0);
};
template <class T>
class linkedlist
{
public:
    linkedlist();
    ~linkedlist();
    bool isEmpty();
    void addtoHead(T data);
    void addtoTail(T data);
    void add(T data, Node<T> *predecessor);
    void removefromHead();
    void remove(T data);
    bool retrieve(T data, Node<T> *&outPtr);
    void traverse();
    bool search(T data);
    Node<T> *Head;
    Node<T> *Tail;
};
