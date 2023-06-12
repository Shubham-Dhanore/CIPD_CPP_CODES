#ifndef ROADWAYS_H
#define ROADWAYS_H

#include <iostream>
#include "transport.h"

class RoadWays : public Transport
{
private:
    int lanes;

public:
    RoadWays(const std::string &name, int capacity, int lanes);
    void displayInfo() override;
};

#endif // ROADWAYS_H
