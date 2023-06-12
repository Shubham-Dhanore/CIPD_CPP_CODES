#ifndef FLIGHT_H
#define FLIGHT_H

#include <iostream>
#include <string>

class flight
{
    int flight_num;
    std::string destination;
    int distance;
    int fuel;

public:
    flight(); // Default Constructor

    flight(int fn, std::string dn, int ds); // Parameterized Constructor

    void showInfo();//show info Function
    void feedInfo();//show Feed info Function
    void calculate_Fuel_Quantity();//Calculate Fuel Quantity
};

#endif
