#ifndef PASSENGER_H
#define PASSENGER_H

#include <iostream>
#include <cstring>

class Passenger
{

    static int seatCount; // Static seat numbers
    int seatNumber;
    std::string passengerName;
    int availability; // if it is 0  - Not available if it is 1 - available
    int age;

public:
    Passenger();                          // Default constructor
    Passenger(std::string name, int age); // parameterized constructor

    // Getter Setter Function
    int getSeatNumber() const { return seatNumber; }
    void setSeatNumber(int seatNumber_) { seatNumber = seatNumber_; }

    std::string getPassengerName() const { return passengerName; }
    void setPassengerName(const std::string &passengerName_) { passengerName = passengerName_; }

    int getAvailability() const { return availability; }
    void setAvailability(int availability_) { availability = availability_; }

    int getAge() const { return age; }
    void setAge(int age_) { age = age_; }

    void display();//display Function
};

#endif
