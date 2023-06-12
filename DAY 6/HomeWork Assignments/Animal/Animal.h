#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string species;
    int age;

public:
    Animal(const std::string& species, int age);
    void displayInfo();
};

#endif
