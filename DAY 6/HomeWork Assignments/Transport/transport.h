#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>

class Transport
{
protected:
    std::string name;
    int capacity;

public:
    Transport(const std::string &name, int capacity);
    virtual void displayInfo();
};

#endif // TRANSPORT_H
