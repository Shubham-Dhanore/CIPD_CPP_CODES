#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() // Deafult Constructor Defination
{
    std::cout << "Vehicle Dtor Called";
    vehicle_num = 0001;
    vehicle_type = "Two Wheeler";
}
Vehicle::Vehicle(int vn, std::string vt) // Parameterized Constructor Defination
{
    vehicle_num = vn;
    vehicle_type = vt;
}
void Vehicle::display()
{
    std::cout << " " << vehicle_num << " " << vehicle_type << std::endl;
}

void Vehicle::accept()
{
    std::cout << "Enter the Vehicle Number:\n";
    std::cin >> vehicle_num;
    std::cout << "Enter the Vehicle Type:\n";
    std::cin >> vehicle_type;
}