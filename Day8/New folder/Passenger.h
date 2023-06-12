#include <iostream>
#include <string>
class Passenger
{
    static int MAXIMUM_SEATS;
    int SeatNumber;
    std::string PassengerName;
    int availability;
    int age;

    Passenger();                                            // default Constructor
    Passenger(int Sn, std::string Pn, int avail, int ag) {} // Parameterized Constructor

public:
    // Getter Setter Functions
    int seatNumber() const { return SeatNumber; }
    void setSeatNumber(int seatNumber) { SeatNumber = seatNumber; }

    std::string passengerName() const { return PassengerName; }
    void setPassengerName(const std::string &passengerName) { PassengerName = passengerName; }

    int getAvailability() const { return availability; }
    void setAvailability(int availability_) { availability = availability_; }

    int getAge() const { return age; }
    void setAge(int age_) { age = age_; }

    void Display(); // Display Function
};