#include <iostream>
#include "TwoWheeler.h"

TwoWheeler::TwoWheeler()
{
    std::cout << "I i am in Default constructor of TwoWheeler Class:";
    TwoWheeler_name = "Hornet";
    TwoWheeler_color = "Red";
}
TwoWheeler::TwoWheeler(std::string twn, std::string twc)
{
    TwoWheeler_name = twn;
    TwoWheeler_color = twc;
}
void TwoWheeler::display()
{
    Vehicle::display();
    std::cout << TwoWheeler_name << " " << TwoWheeler_color << std::endl;
}
void TwoWheeler::accept()
{
}