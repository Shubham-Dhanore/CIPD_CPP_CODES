#include "electronics.h"
#include <iostream>

Electronics::Electronics(const std::string& brand, const std::string& model, double price) :
        brand(brand), model(model), price(price) {
}

void Electronics::displayInfo() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Price: $" << price << std::endl;
}
