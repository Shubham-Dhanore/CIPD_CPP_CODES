#include "indoorplants.h"
#include <iostream>

IndoorPlants::IndoorPlants(const std::string& species, const std::string& commonName, int requiredLight) :
        Plants(species, commonName), requiredLight(requiredLight) {
}

void IndoorPlants::displayInfo() {
    Plants::displayInfo(); // Call the base class function
    std::cout << "Required Light: " << requiredLight << " lumens" << std::endl;
}
