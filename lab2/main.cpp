#include <iostream>

using namespace std;
#include "linkedlist.h"
#include "stack_l.h"

int main()
{
    linkedlist<char> list;

    std::cout << "Implementing Stack\n"
              << std::endl;

    stack<char> *s = new linkedlistStack<char>();
    char value;

    s->push(2);
    s->push(4);
    s->push(5);
    s->push(6);
    s->push(7);
    std::cout << "Top element in s->is " << s->top() << std::endl;
    std::cout << "Removing object from tail " << s->pop() << std::endl;
    std::cout << "Removing object from tail " << s->pop() << std::endl;

    std::cout << "\n";

    // std::cout << stack.pop() << std::endl;
    s->push(7);
    s->pop();
    std::cout << "Top element in stack is " << s->top() << std::endl;
}
