#include <iostream>

class BankAccount
{
    std::string customer_name;
    int account_no;
    std::string account_type;

public:
    BankAccount();//deafult Constructor
    BankAccount(std::string cust_n,int acc_no,std::string acc_type);//parameterized COnstructor

    std::string customerName() const { return customer_name; }
    void setCustomerName(const std::string &customerName) { customer_name = customerName; }

    int accountNo() const { return account_no; }
    void setAccountNo(int accountNo) { account_no = accountNo; }

    std::string accountType() const { return account_type; }
    void setAccountType(const std::string &accountType) { account_type = accountType; }

};