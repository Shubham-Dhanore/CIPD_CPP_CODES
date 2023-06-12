#include <iostream>
#include<string>
#include "flight.h"

Flight::Flight() // Default Constructor
{
    flight_num = 1;
    destination = "Mumbai";
    distance = 100;
    fuel = 200;
    std::cout << "Inside Default Constructor" << std::endl;
}

Flight::Flight(int fn, std::string dn, int ds) // Parameterized Constructor
{
    flight_num = fn;
    destination = dn;
    distance = ds;
    fuel = 0;
}
void Flight::feedInfo()
{
    std::cout << "Please enter the Flight number: ";
    std::cin >> flight_num;
    std::cout << "Please enter the Destination: ";
    std::cin >> destination;
    std::cout << "Please enter the Distance: ";
    std::cin >> distance;
}

void Flight::calculate_Fuel_Quantity()
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
void Flight::showInfo()
{
    void calculate_Fuel_Quantity();
    std::cout << "Flight Number: " << flight_num << std::endl;
    std::cout << "Flight Destination: " << destination << std::endl;
    std::cout << "Distance: " << distance << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << std::endl;
}