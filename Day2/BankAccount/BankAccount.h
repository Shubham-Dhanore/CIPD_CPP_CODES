// header Guard
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
class BankAccount
{
    //instance members
    int accountNo;
    std::string customerName;
    double balance;
    static int accno;
    static float rateofInterest; //class variable
    static int count;
public:
    BankAccount()
    {
        accno++;
        accountNo=accno;
        customerName = "null";
        balance = 00;
        count++;   
    }
    BankAccount(std::string custname, double bal) : customerName(custname), balance(bal)
    {
        accno++;
        accountNo = accno;
        count++;
    }
    static void printRateofInterest();
    void show() const;
    static void printcount();

    int getAccountNo() const { return accountNo; }
    void setAccountNo(int accountNo_) { accountNo = accountNo_; }

    std::string getCustomerName() const { return customerName; }
    void setCustomerName(const std::string &customerName_) { customerName = customerName_; }

    double getBalance() const { return balance; }
    void setBalance(double balance_) { balance = balance_; }
};

#endif // BANKACCOUNT_H
