#ifndef TWOWHEELER_H
#define TWOWHEELER_H

#include <iostream>
#include "Vehicle.h"

class TwoWheeler : public Vehicle
{
    std::string TwoWheeler_name;
    std::string TwoWheeler_color;

public:
    TwoWheeler();
    TwoWheeler(std::string twn, std::string twc);

    std::string twoWheelerName() const { return TwoWheeler_name; }
    void setTwoWheelerName(const std::string &twoWheelerName) { TwoWheeler_name = twoWheelerName; }

    std::string twoWheelerColor() const { return TwoWheeler_color; }
    void setTwoWheelerColor(const std::string &twoWheelerColor) { TwoWheeler_color = twoWheelerColor; }

    void display();
    void accept();
};

#endif // TWOWHEELER_H
