#include <iostream>
#include "queue.h"

int main()
{
    Queue<int> queue(5);
    int topElement;

    queue.firstElement(topElement);

    std::cout << "\nAdding elements in Queue: \n";
    queue.enqueue(5);
    queue.enqueue(7);
    queue.enqueue(10);
    queue.enqueue(11);

    std::cout << "\nChecking elements in front and rear of the Queue: \n";
    queue.firstElement(topElement);
    queue.back(topElement);

    std::cout << "\nRemoving elements from the Queue: \n";
    queue.dequeue(topElement);
    queue.dequeue(topElement);
    queue.firstElement(topElement);
}
