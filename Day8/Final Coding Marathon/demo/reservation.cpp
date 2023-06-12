#include "reservation.h"
#include <iostream>

void Reservation::bookTicket(const std::string& passengerName, int age, int gender) {
    if (passengers.size() >= Passenger::MAXIMUM_SEATS) {
        throw std::runtime_error("No more seats available.");
    }

    Passenger passenger(passengers.size() + 1, passengerName, 1, age);
    passengers.push_back(passenger);

    std::cout << "Ticket booked successfully for passenger: " << passengerName << std::endl;
}

int Reservation::countNumberOfPassengers() const {
    return passengers.size();
}

void Reservation::showDetails() const {
    for (const Passenger& passenger : passengers) {
        passenger.display();
        std::cout << "-----------------------------" << std::endl;
    }
}

void Reservation::searchPassengerDetailsByName(const std::string& passengerName) const {
    bool passengerFound = false;

    for (const Passenger& passenger : passengers) {
        if (passenger.getPassengerName() == passengerName) {
            passengerFound = true;
            passenger.display();
            break;
        }
    }

    if (!passengerFound) {
        throw std::runtime_error("Passenger not found.");
    }
}
