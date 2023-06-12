#include <iostream>
#include <cstring>
#include "Passenger.h"

int Passenger::seatCount = 1;

Passenger::Passenger()// default constructor
{ 
    seatNumber = seatCount++;
    passengerName = "";
    availability = 1;
    age = 0;
}

Passenger::Passenger(std::string Pname, int age)//Parameterized Cosntructor
{
    seatNumber = seatCount++;
    passengerName = Pname;
    availability = 1;
    this->age = age;
}
void Passenger::display()//Display Function
{
    std::cout << "Seat Number: " << seatNumber << std::endl;
    std::cout << "Passenger Name: " << passengerName << std::endl;
    std::cout << "Availability: " << (availability ? "Available" : "Not Available") << std::endl;
    std::cout << "Age: " << age << std::endl;
}
