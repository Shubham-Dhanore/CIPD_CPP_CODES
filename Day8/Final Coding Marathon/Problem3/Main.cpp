#include <iostream>
#include "Reservation.h"
#include "Exception.h"


int main()
{
    Reservation Train;

    try
    {
        Train.bookTicket("Shubham", 25);
        Train.bookTicket("Darshana", 30);
        Train.bookTicket("Kush", 40);
        Train.bookTicket("Teju", 35);
        Train.bookTicket("Pankaj", 28);
        Train.bookTicket("Rahul", 28);
        Train.bookTicket("Sachin", 35);
        Train.bookTicket("Krishna", 28);

        Train.searchPassengerDetailsByName("Pankaj");
        std::cout << Train.countNumberOfPassengers();
    }
    catch (passException &s)
    {
        std::cout << s.getMessage() << "\n";
    }

    return 0;
}