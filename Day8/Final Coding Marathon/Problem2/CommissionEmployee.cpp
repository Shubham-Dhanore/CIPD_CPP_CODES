#include "CommissionEmployee.h"

//Parameterized Constructor
CommissionEmployee::CommissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber, int Id, int grossSales, double commissionRate)
    : Employee(firstName, lastName, socialSecurityNumber, Id)
{
    this->grossSales = grossSales;
    this->commissionRate = commissionRate;
}

void CommissionEmployee::CalculateEarnings()
{
    std::cout << "\nEarnings for Commission : " << grossSales + commissionRate;
}

void CommissionEmployee::Print()
{
    Employee::Print();
    std::cout << "\nGross sales : " << grossSales;
    std::cout << "\nCommission Rate : " << commissionRate;
}