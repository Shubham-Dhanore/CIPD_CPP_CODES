#ifndef INDOORPLANTS_H
#define INDOORPLANTS_H

#include "plants.h"

class IndoorPlants : public Plants {
private:
    int requiredLight; // Intensity of light required in lumens

public:
    IndoorPlants(const std::string& species, const std::string& commonName, int requiredLight);
    void displayInfo(); // Overriding the base class function
};

#endif
