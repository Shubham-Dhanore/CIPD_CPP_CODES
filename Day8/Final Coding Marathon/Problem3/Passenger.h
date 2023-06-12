#ifndef PASSENGER_H
#define PASSENGER_H

#include<iostream>
#include<cstring>
class Passenger {
    static int SeatCount; // Static seat numbers
    int seatNumber;
    std::string passengerName;
    int SeatAvailability; // 0 Not available 1 - available
    int age;

public:
    Passenger(); // Default constructor
    Passenger(std::string name, int age); //parameterized constructor
    void display();

    int getSeatNumber() const { return seatNumber; }
    void setSeatNumber(int seatNumber_) { seatNumber = seatNumber_; }

    std::string getPassengerName() const { return passengerName; }
    void setPassengerName(const std::string &passengerName_) { passengerName = passengerName_; }

    int getAvailability() const { return SeatAvailability; }
    void setAvailability(int availability_) { SeatAvailability = availability_; }

    int getAge() const { return age; }
    void setAge(int age_) { age = age_; }
};

#endif
