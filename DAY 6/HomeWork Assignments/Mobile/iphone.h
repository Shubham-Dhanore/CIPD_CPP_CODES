#ifndef IPHONE_H
#define IPHONE_H
#include<iostream>
#include "mobile.h"

class iPhone : public Mobile {
private:
    std::string faceID;
    std::string color;

public:
    iPhone(const std::string& brand, const std::string& model, int year, float price,
           const std::string& faceID, const std::string& color);
    void displayInfo();
};

#endif // IPHONE_H
