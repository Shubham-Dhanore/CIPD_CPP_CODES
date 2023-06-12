#include <iostream>
#include "transport.h"

Transport::Transport(const std::string &name, int capacity)
    : name(name), capacity(capacity) {}

void Transport::displayInfo()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Capacity: " << capacity << std::endl;
}
