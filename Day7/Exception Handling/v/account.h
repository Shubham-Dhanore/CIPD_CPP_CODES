#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account
{
    std::string accountHolderName;
    int accountNo;
    double balance;

public:
    Account()
    {
    accountHolderName:
        "DILIP";
        accountNo = 234567;
        balance = 23400;
    };

    Account(std::string, int, double);

    void display();
    void accept();

    void withdraw(double);
    void depositeBycheque(double);
    void cheackBalance();
};

#endif // ACCOUNT_H
