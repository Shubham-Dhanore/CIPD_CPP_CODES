#include <iostream>
#include "roadways.h"

RoadWays::RoadWays(const std::string &name, int capacity, int lanes)
    : Transport(name, capacity), lanes(lanes) {}

void RoadWays::displayInfo()
{
    Transport::displayInfo();
    std::cout << "Lanes: " << lanes << std::endl;
}
