#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

class Vehicle
{
    int vehicle_num;
    std::string vehicle_type;

public:
    Vehicle();                       // Default Constructor
    Vehicle(int vn, std::string vt); // Parameterized Constructor

    int vehicleNum() const { return vehicle_num; }
    void setVehicleNum(int vehicleNum) { vehicle_num = vehicleNum; }
    std::string vehicleType() const { return vehicle_type; }
    void setVehicleType(const std::string &vehicleType) { vehicle_type = vehicleType; }
    void display();
    void accept();
};

#endif // VEHICLE_H
