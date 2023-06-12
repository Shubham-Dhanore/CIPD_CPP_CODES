#include "animal.h"
#include <iostream>

Animal::Animal(const std::string& species, int age) :
        species(species), age(age) {
}

void Animal::displayInfo() {
    std::cout << "Species: " << species << std::endl;
    std::cout << "Age: " << age << " years" << std::endl;
}
