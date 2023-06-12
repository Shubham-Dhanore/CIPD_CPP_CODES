#include "mobile.h"
#include <iostream>

Mobile::Mobile(const std::string& brand, const std::string& model, int year, float price)
    : brand(brand), model(model), year(year), price(price) {}

void Mobile::displayInfo() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Price: " << price << std::endl;
}
