#include <iostream>
#include "reservation.h"


int main() {
    Reservation reservation;

    try {
        reservation.bookTicket("John Doe", 30, 1);
        reservation.bookTicket("Jane Smith", 25, 0);
        reservation.bookTicket("Michael Johnson", 45, 1);
        reservation.bookTicket("Emily Davis", 35, 0);
        reservation.bookTicket("David Wilson", 50, 1);
        reservation.bookTicket("Sophia Brown", 28, 0);
        reservation.bookTicket("Daniel Miller", 32, 1);
        reservation.bookTicket("Olivia Taylor", 22, 0);
        reservation.bookTicket("Ethan Anderson", 27, 1);
        reservation.bookTicket("Ava Thomas", 31, 0);
        // reservation.bookTicket("Max", 40, 1); // Uncomment to test throwing an exception for no more seats available
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "Number of passengers: " << reservation.countNumberOfPassengers() << std::endl;

    try {
        reservation.searchPassengerDetailsByName("Emily Davis");
        // reservation.searchPassengerDetailsByName("Invalid Name"); // Uncomment to test throwing an exception for passenger not found
    } catch (const std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
