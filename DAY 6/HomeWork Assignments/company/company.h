#ifndef COMPANY_H
#define COMPANY_H

#include <string>

class Company {
protected:
    std::string name;
    int employees;

public:
    Company(const std::string& name, int employees);
    void displayInfo();
};

#endif
