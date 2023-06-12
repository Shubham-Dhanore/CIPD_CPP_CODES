#ifndef RESERVATION_H
#define RESERVATION_H

#include "passenger.h"
#include <string>
#include <vector>

class Reservation {
private:
    std::vector<Passenger> passengers;

public:
    void bookTicket(const std::string& passengerName, int age, int gender);
    int countNumberOfPassengers() const;
    void showDetails() const;
    void searchPassengerDetailsByName(const std::string& passengerName) const;
};

#endif // RESERVATION_H
