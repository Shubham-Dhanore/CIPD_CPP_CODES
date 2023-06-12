#include <iostream>
#include "pet.h"


Pet::Pet(const std::string& species, int age, const std::string& name, const std::string& owner) :
        Animal(species, age), name(name), owner(owner) {
}

void Pet::displayInfo() {
    Animal::displayInfo(); // Call the base class function
    std::cout << "Name: " << name << std::endl;
    std::cout << "Owner: " << owner << std::endl;
}
