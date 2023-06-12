#include "Manager.h"

Manager::Manager() // default constructor
{
    std::cout << "\nHello i am in Manager Class  constructor\n";
}
// parameterized Constructor
Manager::Manager(std::string firstName, std::string lastName,
                 std::string socialSecurityNumber, int id, std::string designation, enum DEPARTMENTS dept, double incentive, int numberOfSubordinates)
    : Employee(firstName, lastName, socialSecurityNumber, id)
{
    this->designation = designation;
    this->dept = dept;
    this->incentive = incentive;
    this->numberOfSubordinates = numberOfSubordinates;
}

void Manager::CalculateEarnings()
{
    std::cout << "\nEarnings for Manager : " << numberOfSubordinates * incentive;
}

void Manager::Print()
{
    Employee::Print();
    std::cout << "\n designation : " << designation;
    std::cout << "\n Incentives : " << incentive;
    std::cout << "\n Number of subordinates : " << numberOfSubordinates;
}
