#ifndef LAPTOP_H
#define LAPTOP_H
#include<iostream>
#include "electronics.h"

class Laptop : public Electronics
{
private:
    std::string processor;
    int ram;

public:
    Laptop(const std::string &brand, const std::string &model, double price, const std::string &processor, int ram);
    void displayInfo(); // Overriding the base class function
};

#endif
