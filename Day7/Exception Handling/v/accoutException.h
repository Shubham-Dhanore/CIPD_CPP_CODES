#include <iostream>

class AccountException : public std::exception
{

    std::string message;

public:
    AccountException(){};
    AccountException(std::string msg)
    {
        message = msg;
    }

    const std::string getMessage()
    {

        return message;
    }
};