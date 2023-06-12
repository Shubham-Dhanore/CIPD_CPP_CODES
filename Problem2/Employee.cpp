#include <iostream>
#include "Employee.h"

Employee::Employee()//deafult COnstructor
{
    std::string firstName = "shubham";
    std::string lastName = "Dhanore";
    std::string socialsecuritynumber = "EMP1001";
    int employeeid = 1001;
    double basicsalary = 20000;
    float experience = 3.5;
}
Employee::Employee(std::string fn, std::string ln, std::string ssn, int empid, double bs, float exp)//Parameterized COnstructor
{
    std::string firstName = fn;
    std::string lastName = ln;
    std::string socialsecuritynumber = ssn;
    int employeeid = empid;
    double basicsalary = bs;
    float experience = exp;
}

void Employee::calculateEarnings()
{
    
    
}
float Employee::calculateInsurance(){

}