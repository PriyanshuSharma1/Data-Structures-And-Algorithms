#ifndef stackArray_h
#define stackArray_h
#include "linkedlist.h"
#include "stack.h"
#define MAXSIZE 15
template <class T>
class stackArray : public stack<T>
{
public:
  stackArray();
  ~stackArray();
  void push(T data);
  bool pop(T &data);
  bool top(T &data);
  bool isEmpty();
  bool isFull();

private:
  T info[MAXSIZE];
  int index_top;
};
#endif