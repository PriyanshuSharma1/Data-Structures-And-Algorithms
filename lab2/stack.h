#ifndef stack_h
#define stack_h
template <class T>
class stack
{

public:
    virtual void push(T data) = 0;
    virtual bool pop(T &value) = 0;
    virtual bool top(T &value) = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void traverse() = 0;
};

#endif