#include "Reservation.h"
#include "Exception.h"
#include <iostream>

int main()
{
    Reservation Train;

    try
    {
        Train.bookTicket("Dhanore", 34);
        Train.bookTicket("Darshana", 39);
        Train.bookTicket("Kush", 45);
        Train.bookTicket("Tejaswini", 65);
        Train.bookTicket("Aarna", 98);
        Train.bookTicket("Ram", 78);
        Train.bookTicket("Shyam", 45);
        Train.bookTicket("Krishna", 28);

       Train.searchPassengerDetailsByName("Shubham");
        std::cout << Train.countNumberOfPassengers();
    }
    catch (passException &s)
    {
        std::cout << s.getMessage() << "\n";
    }

    return 0;
}