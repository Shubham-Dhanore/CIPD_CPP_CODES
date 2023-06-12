#include <iostream>

class passException : public std::Exception
{

    std::string message;

public:
    passException(){};//Default Constructor
    passException(std::string msg)//Parameterized Constructor
    {
        message = msg;
    }

    const std::string getMessage()
    {

        return message;
    }
};