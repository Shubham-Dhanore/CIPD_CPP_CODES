#ifndef MOBILE_H
#define MOBILE_H

#include <string>

class Mobile {
private:
    std::string brand;
    std::string model;
    int year;
    float price;

public:
    Mobile(const std::string& brand, const std::string& model, int year, float price);
    void displayInfo();
};

#endif // MOBILE_H
