#include "company.h"
#include <iostream>

Company::Company(const std::string& name, int employees) :
        name(name), employees(employees) {
}

void Company::displayInfo() {
    std::cout << "Company Name: " << name << std::endl;
    std::cout << "Number of Employees: " << employees << std::endl;
}
