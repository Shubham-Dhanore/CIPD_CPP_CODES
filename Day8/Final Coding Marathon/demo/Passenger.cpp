#include "passenger.h"
#include <iostream>

int Passenger::MAXIMUM_SEATS = 10;

Passenger::Passenger()
    : seatNumber(0), availability(0), age(0) {}

Passenger::Passenger(int seatNumber, const std::string& passengerName, int availability, int age)
    : seatNumber(seatNumber), passengerName(passengerName), availability(availability), age(age) {}

int Passenger::getSeatNumber() const {
    return seatNumber;
}

void Passenger::setSeatNumber(int seatNumber) {
    this->seatNumber = seatNumber;
}

const std::string& Passenger::getPassengerName() const {
    return passengerName;
}

void Passenger::setPassengerName(const std::string& passengerName) {
    this->passengerName = passengerName;
}

int Passenger::getAvailability() const {
    return availability;
}

void Passenger::setAvailability(int availability) {
    this->availability = availability;
}

int Passenger::getAge() const {
    return age;
}

void Passenger::setAge(int age) {
    this->age = age;
}

void Passenger::display() const {
    std::cout << "Seat Number: " << seatNumber << std::endl;
    std::cout << "Passenger Name: " << passengerName << std::endl;
    std::cout << "Availability: " << availability << std::endl;
    std::cout << "Age: " << age << std::endl;
}
