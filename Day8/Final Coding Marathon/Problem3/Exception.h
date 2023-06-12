#include <iostream>

class passException : public std::exception
{

    std::string message;

public:
    passException(){};//default const
    passException(std::string msg)//parameter const
    {
        message = msg;
    }

    const std::string getMessage()
    {

        return message;
    }
};