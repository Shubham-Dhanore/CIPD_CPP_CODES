#include<iostream>
#include "electronics.h"
#include "laptop.h"

int main() {
    Electronics device("Sony", "TV", 599.99);
    device.displayInfo();

    std::cout << std::endl;

    Laptop laptop("Apple", "MacBook Pro", 1999.99, "Intel Core i7", 16);
    laptop.displayInfo();

    return 0;
}
