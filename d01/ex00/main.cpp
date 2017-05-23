#include "Pony.hpp"
#include <iostream>

void    ponyOnTheHeap(void)
{
    Pony* myPony = new Pony("HeapPony", 15, "White");
    myPony->sayHello();
    std::cout << "Pointer address " << myPony << std::endl;
    delete myPony;
}

void    ponyOnTheStack(void)
{
    Pony myPony("StackPony", 20, "Black");
    myPony.sayHello();
    std::cout << "Pointer address " << &myPony << std::endl;
}

int main(void)
{
    std::cout << "Creating pony on the heap" << std::endl;
    ponyOnTheHeap();
    std::cout << "Creating pony on the stack" << std::endl;
    ponyOnTheStack();
}