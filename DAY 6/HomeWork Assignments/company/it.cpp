#include "it.h"
#include <iostream>

IT::IT(const std::string& name, int employees, const std::string& technology, int projects) :
        Company(name, employees), technology(technology), projects(projects) {
}

void IT::displayInfo() {
    Company::displayInfo(); // Call the base class function
    std::cout << "Technology: " << technology << std::endl;
    std::cout << "Number of Projects: " << projects << std::endl;
}
