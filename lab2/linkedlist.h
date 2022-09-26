/**
 * @file linked.cpp
 * @author Priyanshu Sharma
 * @brief
 * @version 0.1
 * @date 2022-09-20
 *
 */
#ifndef linkedlist_h
#define linkedlist_h

#include <iostream>
using namespace std;

// defining class for node
template <class T>
class Node
{
public:
    T info;
    Node *next;
    Node(T data);
};

// defining class for linked list
template <class T>
class linkedlist
{
private:
    Node<T> *Head;
    Node<T> *Tail;

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
};

#endif