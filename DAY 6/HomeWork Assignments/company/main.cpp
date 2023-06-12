#include<iostream>
#include "company.h"
#include "it.h"

int main() {
    Company company("ABC Inc.", 100);
    company.displayInfo();

    std::cout << std::endl;

    IT itCompany("XYZ Ltd.", 50, "Software Development", 5);
    itCompany.displayInfo();

    return 0;
}
