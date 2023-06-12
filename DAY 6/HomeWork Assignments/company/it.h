#ifndef IT_H
#define IT_H

#include "company.h"

class IT : public Company {
private:
    std::string technology;
    int projects;

public:
    IT(const std::string& name, int employees, const std::string& technology, int projects);
    void displayInfo(); // Overriding the base class function
};

#endif
