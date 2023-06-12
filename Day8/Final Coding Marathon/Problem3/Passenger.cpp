#include "Passenger.h"
#include <iostream>
#include<cstring>

int Passenger::SeatCount = 1;

Passenger::Passenger() //Default constructor
{
    seatNumber = SeatCount++;
    passengerName = "";
    SeatAvailability = 1;
    age = 0;
}

Passenger::Passenger(std::string name, int age) //Parameterized COonstructor
{
    seatNumber = SeatCount++;
    passengerName = name;
    SeatAvailability = 1;
    this->age = age;
}
void Passenger::display() //Display Function
{
    std::cout << "Seat Number: " << seatNumber << std::endl;
    std::cout << "Passenger Name: " << passengerName << std::endl;
    std::cout << "Availability: " << (SeatAvailability ? "Available" : "Not Available") << std::endl;
    std::cout << "Age: " << age << std::endl;
}
