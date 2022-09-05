#include <iostream>
#include "linkedlist.h"

LinkedList::LinkedList()
{
    HEAD = NULL;
    TAIL = NULL;
}

LinkedList::~LinkedList()
{
    delete HEAD, TAIL;
}

bool LinkedList::isEmpty()
{
    if (HEAD == NULL && TAIL == NULL)
    {
        std::cout << "List is Empty\n";
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedList::addToHead(int n)
{
    Node *newnode = new Node(n, HEAD);
    HEAD = newnode;
    if (TAIL == NULL)
    {
        TAIL = HEAD;
    }
}

int LinkedList::removeFromHead()
{
    if (isEmpty())
    {
        std::cout << "List is empty";
    }

    Node *NodeToDelete = HEAD;
    HEAD = NodeToDelete->next;
    int removed = NodeToDelete->info;
    delete NodeToDelete;
    if (HEAD == NULL)
    {
        TAIL = NULL;
    }
    return removed;
}

void LinkedList::addToTail(int n)
{
    Node *newNode = new Node(n, NULL);

    if (isEmpty())
    {
        TAIL = newNode;
        HEAD = TAIL;
    }
    else
    {
        TAIL->next = newNode;
        TAIL = newNode;
    }
}

int LinkedList::removeFromTail()
{
    if (isEmpty())
    {
        std::cout << "List is Empty";
    }

    Node *NodeToDelete = TAIL;
    int removed = NodeToDelete->info;

    if (HEAD == TAIL)
    {
        HEAD = TAIL = NULL;
    }
    else
    {
        Node *pred = HEAD;
        while (pred->next != TAIL)
        {
            pred = pred->next;
        }
        TAIL = pred;
        pred->next = NULL;
        delete NodeToDelete;
    }
    return removed;
}

int LinkedList::getHead()
{
    if (isEmpty())
    {
        std::cout << "List is Empty";
    }
    return HEAD->info;
}

int LinkedList::getTail()
{
    if (isEmpty())
    {
        std::cout << "List is Empty";
    }
    return TAIL->info;
}

void LinkedList::traverse(char roam)
{
    if (isEmpty())
    {
        isEmpty();
    }
    else
    {
        Node *temp = HEAD;

        while (temp != NULL)
        {
            std::cout << temp->info << roam;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}

void LinkedList::add(int data, Node *predecessor)
{
    Node *newNode = new Node(data, predecessor->next);
    predecessor->next = newNode;
}

void LinkedList::remove(int data)
{
    if (HEAD->info == data)
    {
        removeFromHead();
    }
    else
    {
        Node *temp = HEAD->next;
        Node *previous = HEAD;
        while (temp != NULL)
        {
            if (temp->info == data)
            {
                break;
            }
            else
            {
                previous = previous->next;
                temp = temp->next;
            }
        }
        previous->next = temp->next;
        delete temp;
    }
}

bool LinkedList::search(int data)
{
    Node *p = HEAD;
    while (p != NULL)
    {
        if (p->info == data)
        {
            std::cout << "\n Data Found ! " << data << std::endl;
            return true;
        }
        p = p->next;
    }
    return false;
    isEmpty();
}

bool LinkedList::retrieve(int data, Node *dataptr)
{
    Node *p = HEAD;
    while (p != NULL && p->info != data)
    {
        p = p->next;
    }

    if (p == NULL)
    {
        return false;
    }
    else
    {
        dataptr = p;
        return true;
    }
}
