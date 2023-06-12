#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Departments.h"

class Employee // Employee Class
{

    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    int employeeId;
    double basicSalary;
    float experiance;

public:
    Employee(); // default constructor

    Employee(std::string, std::string, std::string, int employeeId); // Parameterized Constructor

    virtual void CalculateEarnings() = 0; // pure virtual function
    virtual ~Employee()                   // Destructor
    {
        std::cout << "\n Hello, I am in Employee Class destructor\n";
    }
    float calculateInsurance(int, float);// Calculate Insurance Function Called

    virtual void Print();

    std::string getSocialSecurityNumber() const { return socialSecurityNumber; }
    void setSocialSecurityNumber(const std::string &socialSecurityNumber_) { socialSecurityNumber = socialSecurityNumber_; }

    std::string getLastName() const { return lastName; }
    void setLastName(const std::string &lastName_) { lastName = lastName_; }

    std::string getFirstName() const { return firstName; }
    void setFirstName(const std::string &firstName_) { firstName = firstName_; }

    int getEmployeeId() const { return employeeId; }
    void setEmployeeId(int employeeId_) { employeeId = employeeId_; }

    float getExperiance() const { return experiance; }
    void setExperiance(float experiance_) { experiance = experiance_; }

    double getBasicSalary() const { return basicSalary; }
    void setBasicSalary(double basicSalary_) { basicSalary = basicSalary_; }
};
void showenumdata(enum DEPARTMENTS deprt);

#endif // EMPLOYEE_H
