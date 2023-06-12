#ifndef RESERVATION_H
#define RESERVATION_H
#include"Passenger.h"
#define MAXIMUM_SEATS  10
class Reservation {
    
    Passenger passengers[MAXIMUM_SEATS];
    int numberOfPassengers;

public:
    Reservation();//default constructor

    void bookTicket(std::string name, int age);
    int countNumberOfPassengers();
    void showDetails();
    void searchPassengerDetailsByName(std::string name);
};

#endif
