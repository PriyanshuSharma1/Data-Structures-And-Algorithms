
#include <iostream>
#include "stack.h"
#include "stackLinkedlist.h"
#include "stackArray.h"
int main()
{

     cout << "--------------------------------------" << endl;

     cout << "Stack Implementation" << endl;
     cout << "--------------------------------------" << endl;

     // creating a stack that can hold float values.
     stack<char> *s = new stackLinkedlist<char>();
     char value;
     // checking if the stack is empty
     if (s->isEmpty())
     {
          cout << "Stack is empty" << endl;
     }
     else
     {
          cout << "Stack is not empty";
     }
     cout << endl
          << endl;

     cout << "Pushing data into the stack" << endl;
     s->push('p');
     // getting the value at the top of the stack
     if (s->top(value))
     {
          cout << "Top of the stack is : " << value << endl;
     }
     cout << "--------------------------------------" << endl;

     cout << "Pushing data into the stack" << endl;
     s->push('r');
     s->push('i');
     cout << "The elements in the stack are:" << endl;
     s->traverse();

     // poping the top of the stack
     s->pop(value);
     cout << "The popped element from the stack is :" << value << endl;
     s->push('y');
     s->push('a');
     s->push('n');
     s->push('s');
     s->top(value);
     cout << endl
          << endl;
     ;

     cout << "--------------------------------------" << endl;
     cout << "Popping the top element" << endl;
     cout << "The popped element from the stack is :" << value << endl;

     cout << "The remaining elements" << endl;
     s->traverse();
     s->push('h');
     s->push('u');
     s->push('s');
     s->push('h');
     s->top(value);
     cout << endl
          << endl;
     cout << "--------------------------------------" << endl;

     cout << "Popping the top element" << endl;
     cout << "The popped element from the stack is :" << value << endl;

     cout << "The remaining elements" << endl;
     s->traverse();
     cout << endl;
     s->push('a');
     s->push('r');
     s->push('m');
     s->push('a');
     cout << endl;
}