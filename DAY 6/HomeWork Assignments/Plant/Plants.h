#ifndef PLANTS_H
#define PLANTS_H

#include <string>

class Plants {
protected:
    std::string species;
    std::string commonName;

public:
    Plants(const std::string& species, const std::string& commonName);
    void grow();
    void displayInfo();
};

#endif
