// #ifndef FLIGHT_H
// #define FLIGHT_H

#include <iostream>
#include <string>

class Flight
{
    int flight_num;
    std::string destination;
    int distance;
    int fuel;

public:
    Flight(); // Default Constructor

    Flight(int fn, std::string dn, int ds); // Parameterized Constructor

    void showInfo();
    void feedInfo();
    void calculate_Fuel_Quantity();
};

// #endif
