#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    static int MAXIMUM_SEATS;
    int seatNumber;
    std::string passengerName;
    int availability;
    int age;

public:
    Passenger();
    Passenger(int seatNumber, const std::string& passengerName, int availability, int age);

    // Getters and setters
    int getSeatNumber() const;
    void setSeatNumber(int seatNumber);

    const std::string& getPassengerName() const;
    void setPassengerName(const std::string& passengerName);

    int getAvailability() const;
    void setAvailability(int availability);

    int getAge() const;
    void setAge(int age);

    void display() const;
};

#endif // PASSENGER_H
