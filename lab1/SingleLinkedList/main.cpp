#include "linkedlist.h"
#include <iostream>

int main()
{
    std::cout << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Implementation of Linked List"
              << std::endl;
    std::cout << "============================" << std::endl;

    LinkedList list;

    std::cout << " \n";
    list.isEmpty();

    std::cout << "\n Add To Head \n";
    std::cout << "====================" << std::endl;

    list.addToHead(5);
    list.addToHead(10);
    list.addToHead(56);

    std::cout << "\n Elements in the List \n";
    list.traverse();

    std::cout << "\nRemoving element from HEAD.\n";
    std::cout << "================================" << std::endl;

    list.removeFromHead();
    std::cout << "The Elements in the List \n";
    list.traverse();
    std::cout << std::endl;

    std::cout << "\nAdd to Tail\n";
    std::cout << "==================" << std::endl;

    list.addToTail(8);
    list.addToTail(61);
    std::cout << "The elements in the list are \n";
    list.traverse();
    std::cout << std::endl;

    std::cout << "\nRemoving elements from TAIL \n";
    std::cout << "================================" << std::endl;
    list.removeFromTail();

    std::cout << "Elements in the list are\n";
    list.traverse();
    std::cout << std::endl;

    std::cout << "Searching the element with value 10";

    list.search(10);
    std::cout << std::endl;

    std::cout << "Removing the element with value 10";

    list.remove(10);
    std::cout << "\nThe elements in the list are \n";
    list.traverse();
}
