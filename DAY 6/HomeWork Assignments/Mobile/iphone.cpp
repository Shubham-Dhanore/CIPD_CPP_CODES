#include <iostream>
#include "iphone.h"

iPhone::iPhone(const std::string& brand, const std::string& model, int year, float price,
               const std::string& faceID, const std::string& color)
    : Mobile(brand, model, year, price), faceID(faceID), color(color) {}

void iPhone::displayInfo() {
    Mobile::displayInfo();
    std::cout << "Face ID: " << faceID << std::endl;
    std::cout << "Color: " << color << std::endl;
}
