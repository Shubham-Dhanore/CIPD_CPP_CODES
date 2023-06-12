#include<iostream>
#include"BankAccount.h"

float BankAccount::rateofInterest = 7.5;
int BankAccount::accno = 1010;
int BankAccount::count = 0;
void BankAccount::show() const
{
    std::cout<<"Account no is :"<<accountNo<<std::endl;
    std::cout<<"Customer Name is :"<<customerName<<std::endl;
    std::cout<<"Balance is :"<<balance<<std::endl;
}
void BankAccount::printRateofInterest()
{
    std::cout<<rateofInterest;

    //static Function cannot access instance members
    //static FUnction 
}

void BankAccount::printcount(){
    std::cout<<"Printing count"<<count<<std::endl;
}