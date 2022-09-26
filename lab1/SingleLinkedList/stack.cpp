// // pure virtual function of methods
// // stack class
// // array implementation
// // linkedliststack implementation
// #include <iostream>
// #include "stack.h"
// #include "linkedlist.h"
// #define N 10
// class ArrayStack : public Stack
// {
// public:
//     virtual void push(int item);
//     virtual int pop();
//     virtual int top();
//     virtual void isEmpty();

// private:
//     int arr[N];
// };
// class LinkedListStack : public Stack
// {
// private:
//     LinkedList list;

// public:
//     virtual void push(int data)
//     {
//         list.addToTail(data);
//     }

//     virtual int pop()
//     {
//         return list.removeFromTail();
//     }

//     virtual int top()
//     {
//         return list.getTail();
//     }

//     virtual ~LinkedListStack() {}
// };
