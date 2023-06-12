#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include "Employee.h"

class CommissionEmployee : public Employee // Inheritance via Public Mode
{
    double grossSales;
    float commissionRate;

public:
    CommissionEmployee() // Default constructor
    {
        std::cout << "\nHello,CommissionEmployee Constructor is called\n";
    }

    ~CommissionEmployee() // Destructor
    {
        std::cout << "\nHello,CommissionEmployee Destructor called\n";
    }
    // Parametrized Contructor
    CommissionEmployee(std::string firstName, std::string lastName, std::string socialSecurityNumber, int id, int grossSales, double commissionRate);

    void CalculateEarnings();
    void Print();

    // getter Setter Functions
    double getGrossSales() const { return grossSales; }
    void setGrossSales(double grossSales_) { grossSales = grossSales_; }

    float getCommissionRate() const { return commissionRate; }
    void setCommissionRate(float commissionRate_) { commissionRate = commissionRate_; }
};

#endif
