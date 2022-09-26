/**
 * @file stack.h
 * @author Bikraj Shrestha
 * @brief
 * @version 0.1
 * @date 2022-09-17
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef stack_h
#define stack_h
template <class T>
class stack
{

public:
    virtual void push(T data) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;
    virtual ~stack() {}
};

#endif