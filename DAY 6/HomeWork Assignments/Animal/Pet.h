#ifndef PET_H
#define PET_H

#include "animal.h"

class Pet : public Animal {
private:
    std::string name;
    std::string owner;

public:
    Pet(const std::string& species, int age, const std::string& name, const std::string& owner);
    void displayInfo(); // Overriding the base class function
};

#endif
