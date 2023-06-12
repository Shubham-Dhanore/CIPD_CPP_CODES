#include "Mystack.h"
#include <iostream>

Mystack::Mystack() {//Deafult Constructor
    size = 5;
    pointer = new int[size];
    top = -1;
}

Mystack::Mystack(int size) {//parameterized COnstructor
    this->size = size;
    pointer = new int[size];
    top = -1;
}

Mystack::~Mystack() {//Destroctor
    delete[] pointer;
}

void Mystack::push(int element) {//Push Function
    if (top == size - 1) {
        std::cout << "Stack is full. We Cannot push element in stack" << element << std::endl;
        return;
    }
    pointer[++top] = element;
    std::cout << "Element " << element << " pushed to the stack." << std::endl;
}

void Mystack::pop() {
    if (top == -1) {
        std::cout << "Stack is empty. Cannot pop element." << std::endl;
        return;
    }
    int poppedElement = pointer[top--];
    std::cout << "Element " << poppedElement << " popped from the stack." << std::endl;
}

void Mystack::display() {
    if (top == -1) {
        std::cout << "Stack is empty." << std::endl;
        return;
    }
    std::cout << "Elements in the stack:" << std::endl;
    for (int i = top; i >= 0; i--) {
        std::cout << pointer[i] << " ";
    }
    std::cout << std::endl;
}
