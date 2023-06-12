#include <iostream>
#include "flight.h"

flight::flight() // Default Constructor
{
    flight_num = 1;
    destination = "Mumbai";
    distance = 100;
    fuel = 200;
    std::cout << "Inside Default Constructor" << std::endl;
}

flight::flight(int fn, std::string dn, int ds) // Parameterized Constructor
{
    flight_num = fn;
    destination = dn;
    distance = ds;
    fuel = 0;
    std::cout << "Inside Parameterized Constructor" << std::endl;
}

void flight::feedInfo()
{
    std::cout << "Please enter the Flight number: ";
    std::cin >> flight_num;
    std::cout << "Please enter the Destination: ";
    std::cin >> destination;
    std::cout << "Please enter the Distance: ";
    std::cin >> distance;
}

void flight::calculate_Fuel_Quantity() // Fuel Calculate
{
    if (distance <= 1000)
    {
        fuel = 500;
    }
    else if (distance > 1000 && distance <= 2000)
    {
        fuel = 1100;
    }
    else
    {
        fuel = 2000;
    }
}

void flight::showInfo() // display function
{
    calculate_Fuel_Quantity();
    std::cout << "Flight Number: " << flight_num << std::endl;
    std::cout << "Flight Destination: " << destination << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << std::endl;
}
