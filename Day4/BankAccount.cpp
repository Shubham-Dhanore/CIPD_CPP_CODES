#include <iostream>
class BankAccount
{
    BankAccount()
    {
        std::string Depositer_name;
        int Account_no;
        std::string Type_of_Account;
        int Account_balance;
    }
    BankAccount(std::string dn,int An,std::string Toa,int Ab){
        std::string Depositer_name = dn;
        int Account_no = An;
        std::string Type_of_Account = Toa;
        int Account_balance = Ab;
    }
    
};

int main()
{
    return 0;
}