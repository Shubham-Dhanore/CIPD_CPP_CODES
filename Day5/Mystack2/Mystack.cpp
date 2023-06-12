#include "Mystack.h"
#include <iostream>

Mystack::Mystack() {
    size = 5;
    pointer = new int[size];
    for (int i = 0; i < size; i++) {
        pointer[i] = 0;
    }
}

Mystack::Mystack(int size) {
    this->size = size;
    pointer = new int[size];
    for (int i = 0; i < size; i++) {
        pointer[i] = 0;
    }
}

Mystack::~Mystack() {
    delete[] pointer;
}

void Mystack::accept() {
    std::cout << "Enter " << size << " elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> pointer[i];
    }
}

void Mystack::display() {
    std::cout << "Elements in the stack:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << pointer[i] << " ";
    }
    std::cout << std::endl;
}
