#include "Employee.h"

Employee::Employee()//Default COnstructor
{
    std::cout << "\nHello I am in Employee constructor\n";
}

// parameterized constructor
Employee::Employee(std::string first, std::string last, std::string socialSecurity, int Id)
    : firstName(first), lastName(last), socialSecurityNumber(socialSecurity), employeeId(Id) {}
//calculateInsurance function
float Employee::calculateInsurance(int FamilyMember, float preminum)
{

    return FamilyMember * preminum;
}

void Employee::Print()
{
    std::cout << "\nFirst Name : " << firstName;
    std::cout << "\nLast Name : " << lastName;
    std::cout << "\nSocial Security Number : " << socialSecurityNumber;
    std::cout << "\nEmployee ID : " << employeeId;
}
