#include "plants.h"
#include <iostream>

Plants::Plants(const std::string& species, const std::string& commonName) :
        species(species), commonName(commonName) {
}

void Plants::grow() {
    std::cout << "The plant is growing." << std::endl;
}

void Plants::displayInfo() {
    std::cout << "Species: " << species << std::endl;
    std::cout << "Common Name: " << commonName << std::endl;
}
