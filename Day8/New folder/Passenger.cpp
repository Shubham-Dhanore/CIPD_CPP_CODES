#include <iostream>
#include "Passenger.h"

int Passenger::MAXIMUM_SEATS = 10; // Macro to Set MAximum Seats as 10.

Passenger::Passenger() // Default Constructor
{
}

Passenger ::Passenger(int Sn, std::string Pn, int avail, int ag) // Parametrized COnstructor
{
    SeatNumber = Sn;
    std::string PassengerName = Pn;
    availability = avail;
    age = ag;
}
void Passenger::Display()//Display Fucntion
{
    std::cout << "Seath Number is :" << SeatNumber << std::endl;
    std::cout << "PassengerName is :" << PassengerName << std::endl;
    std::cout << "Avialability is :" << availability << std::endl;
    std::cout << "Age is :" <<age << std::endl;
}