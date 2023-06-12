#include <iostream>
#include "Inventory.h"

int main() {
    // Create 5 objects of Inventory class on the heap
    Inventory* inventory1 = new Inventory("Product 1", 50, 1001);
    Inventory* inventory2 = new Inventory("Product 2", 30, 1002);
    Inventory* inventory3 = new Inventory("Product 3", 25, 1003);
    Inventory* inventory4 = new Inventory("Product 4", 40, 1004);
    Inventory* inventory5 = new Inventory("Product 5", 35, 1005);

    // Display details of the inventory objects
    std::cout << *inventory1 << std::endl;
    std::cout << *inventory2 << std::endl;
    std::cout << *inventory3 << std::endl;
    std::cout << *inventory4 << std::endl;
    std::cout << *inventory5 << std::endl;

    // Test the member functions
    inventory1->purchase(10);
    inventory1->sale(5);
    inventory1->search(1001);

    // Free memory allocated on the heap
    delete inventory1;
    delete inventory2;
    delete inventory3;
    delete inventory4;
    delete inventory5;

    return 0;
}