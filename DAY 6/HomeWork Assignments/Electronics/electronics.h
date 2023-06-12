#ifndef ELECTRONICS_H
#define ELECTRONICS_H
#include<iostream>
#include <string>

class Electronics {
protected:
    std::string brand;
    std::string model;
    double price;

public:
    Electronics(const std::string& brand, const std::string& model, double price);
    void displayInfo();
};

#endif
