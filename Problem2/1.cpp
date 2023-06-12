// employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    int employeeId;
    double basicSalary;
    float experience;

public:
    Employee();
    Employee(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience);
    virtual ~Employee();

    // Getters
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getSocialSecurityNumber() const;
    int getEmployeeId() const;
    double getBasicSalary() const;
    float getExperience() const;

    // Setters
    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setSocialSecurityNumber(const std::string& ssn);
    void setEmployeeId(int employeeId);
    void setBasicSalary(double basicSalary);
    void setExperience(float experience);

    // Virtual functions
    virtual double calculateEarnings() = 0;
    virtual float calculateInsurance(int numberOfFamilyMembers, float premiumRate) = 0;
    virtual void print();
};

#endif
//employee.cpp
#include "employee.h"
#include <iostream>

Employee::Employee() : employeeId(0), basicSalary(0.0), experience(0.0) {}

Employee::Employee(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience)
    : firstName(firstName), lastName(lastName), socialSecurityNumber(ssn), employeeId(employeeId), basicSalary(basicSalary), experience(experience) {}

Employee::~Employee() {}

std::string Employee::getFirstName() const {
    return firstName;
}

std::string Employee::getLastName() const {
    return lastName;
}

std::string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

int Employee::getEmployeeId() const {
    return employeeId;
}

double Employee::getBasicSalary() const {
    return basicSalary;
}

float Employee::getExperience() const {
    return experience;
}

void Employee::setFirstName(const std::string& firstName) {
    this->firstName = firstName;
}

void Employee::setLastName(const std::string& lastName) {
    this->lastName = lastName;
}

void Employee::setSocialSecurityNumber(const std::string& ssn) {
    socialSecurityNumber = ssn;
}

void Employee::setEmployeeId(int employeeId) {
    this->employeeId = employeeId;
}

void Employee::setBasicSalary(double basicSalary) {
    this->basicSalary = basicSalary;
}

void Employee::setExperience(float experience) {
    this->experience = experience;
}

void Employee::print() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "SSN: " << socialSecurityNumber << std::endl;
    std::cout << "Employee ID: " << employeeId << std::endl;
    std::cout << "Basic Salary: " << basicSalary << std::endl;
    std::cout << "Experience: " << experience << " years" << std::endl;
}
//commision.h
#ifndef COMMISSION_H
#define COMMISSION_H

#include "employee.h"

class CommissionEmployee : public Employee {
private:
    double grossSales;
    double commissionRate;

public:
    CommissionEmployee();
    CommissionEmployee(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience, double grossSales, double commissionRate);

    // Getters
    double getGrossSales() const;
    double getCommissionRate() const;

    // Setters
    void setGrossSales(double grossSales);
    void setCommissionRate(double commissionRate);

    // Overridden functions
    double calculateEarnings() override;
    float calculateInsurance(int numberOfFamilyMembers, float premiumRate) override;
    void print() override;
};

#endif

//commission.cpp
// #include "commission.h"
#include <iostream>

CommissionEmployee::CommissionEmployee()
    : grossSales(0.0), commissionRate(0.0) {}

CommissionEmployee::CommissionEmployee(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience, double grossSales, double commissionRate)
    : Employee(firstName, lastName, ssn, employeeId, basicSalary, experience), grossSales(grossSales), commissionRate(commissionRate) {}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

void CommissionEmployee::setGrossSales(double grossSales) {
    this->grossSales = grossSales;
}

void CommissionEmployee::setCommissionRate(double commissionRate) {
    this->commissionRate = commissionRate;
}

double CommissionEmployee::calculateEarnings() {
    return basicSalary + (grossSales * commissionRate);
}

float CommissionEmployee::calculateInsurance(int numberOfFamilyMembers, float premiumRate) {
    return numberOfFamilyMembers * premiumRate;
}

void CommissionEmployee::print() {
    Employee::print();
    std::cout << "Employee Type: Commission Employee" << std::endl;
    std::cout << "Gross Sales: " << grossSales << std::endl;
    std::cout << "Commission Rate: " << commissionRate << std::endl;
}
//dept.h
#ifndef DEPT_H
#define DEPT_H

enum Department {
    MARKETING,
    SALES,
    RECRUITING
};

#endif
//manager.h
#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
// #include "dept.h"

class Manager : public Employee {
private:
    std::string designation;
    Department department;
    double incentive;
    int numberOfSubordinates;

public:
    Manager();
    Manager(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience,
        const std::string& designation, Department department, double incentive, int numberOfSubordinates);

    // Getters
    std::string getDesignation() const;
    Department getDepartment() const;
    double getIncentive() const;
    int getNumberOfSubordinates() const;

    // Setters
    void setDesignation(const std::string& designation);
    void setDepartment(Department department);
    void setIncentive(double incentive);
    void setNumberOfSubordinates(int numberOfSubordinates);

    // Overridden functions
    double calculateEarnings() override;
    float calculateInsurance(int numberOfFamilyMembers, float premiumRate) override;
    void print() override;
};

#endif
//manager.cpp
// #include "manager.h"
#include <iostream>

Manager::Manager()
    : incentive(0.0), numberOfSubordinates(0) {}

Manager::Manager(const std::string& firstName, const std::string& lastName, const std::string& ssn, int employeeId, double basicSalary, float experience,
    const std::string& designation, Department department, double incentive, int numberOfSubordinates)
    : Employee(firstName, lastName, ssn, employeeId, basicSalary, experience), designation(designation), department(department),
    incentive(incentive), numberOfSubordinates(numberOfSubordinates) {}

std::string Manager::getDesignation() const {
    return designation;
}

Department Manager::getDepartment() const {
    return department;
}

double Manager::getIncentive() const {
    return incentive;
}

int Manager::getNumberOfSubordinates() const {
    return numberOfSubordinates;
}

void Manager::setDesignation(const std::string& designation) {
    this->designation = designation;
}

void Manager::setDepartment(Department department) {
    this->department = department;
}

void Manager::setIncentive(double incentive) {
    this->incentive = incentive;
}

void Manager::setNumberOfSubordinates(int numberOfSubordinates) {
    this->numberOfSubordinates = numberOfSubordinates;
}

double Manager::calculateEarnings() {
    return basicSalary + (incentive * numberOfSubordinates);
}

float Manager::calculateInsurance(int numberOfFamilyMembers, float premiumRate) {
    return numberOfFamilyMembers * premiumRate;
}

void Manager::print() {
    Employee::print();
    std::cout << "Employee Type: Manager" << std::endl;
    std::cout << "Designation: " << designation << std::endl;
    std::cout << "Department: " << department << std::endl;
    std::cout << "Incentive: " << incentive << std::endl;
    std::cout << "Number of Subordinates: " << numberOfSubordinates << std::endl;
}
//main.cpp
#include "employee.h"
// #include "commission.h"
// #include "manager.h"

int main() {
    Employee* employee = new CommissionEmployee("John", "Doe", "123-456-789", 1001, 5000.0, 2.5, 10000.0, 0.05);
    employee->print();
    std::cout << "Earnings: " << employee->calculateEarnings() << std::endl;
    std::cout << "Insurance: " << employee->calculateInsurance(2, 100.0) << std::endl;
    delete employee;

    employee = new Manager("Jane", "Smith", "987-654-321", 2001, 7000.0, 5.0, "Senior Manager", MARKETING, 2000.0, 10);
    employee->print();
    std::cout << "Earnings: " << employee->calculateEarnings() << std::endl;
    std::cout << "Insurance: " << employee->calculateInsurance(3, 150.0) << std::endl;
    delete employee;

    return 0;
}
