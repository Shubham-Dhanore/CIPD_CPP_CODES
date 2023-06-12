#include "laptop.h"
#include <iostream>

Laptop::Laptop(const std::string& brand, const std::string& model, double price, const std::string& processor, int ram) :
        Electronics(brand, model, price), processor(processor), ram(ram) {
}

void Laptop::displayInfo() {
    Electronics::displayInfo(); // Call the base class function
    std::cout << "Processor: " << processor << std::endl;
    std::cout << "RAM: " << ram << " GB" << std::endl;
}
