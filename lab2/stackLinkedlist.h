

#ifndef stackLinkedlist_h
#define stackLinkedlist_h
#include "linked.h"
#include "stack.h"
template <class T>
class stackLinkedlist:public stack<T>{
    public:
        stackLinkedlist ():index_top(1){};
        ~stackLinkedlist();
        void push(T data);
        bool pop(T &value);
        bool top (T &value);
        bool isEmpty();
        bool isFull();
        void traverse();
    private:
        linkedlist<T> list;
        int index_top;
};
#endif