#include <iostream>
#include "account.h"
#include "accoutException.h"


Account::Account(std::string name,int acno,double bal){
    accountHolderName=name;
    accountNo=acno;
    balance=bal;
};

void Account::display(){
    std::cout<<accountHolderName<<std::endl;
    std::cout<<accountNo<<std::endl;
    std::cout<<balance<<std::endl;
}

void Account::accept(){
     std::cout<<"accountHolderName"<<std::endl;
     std::cin>>accountHolderName;
    std::cout<<"accountNo"<<std::endl;
    std::cin>>accountNo;
    std::cout<<"balance"<<std::endl;
    std::cin>>balance;
}

void Account::withdraw (double amt){

    if(amt>this->balance){
        throw AccountException("Insufficient Balance");
    }
    else{
        balance=balance-amt;
        std::cout<<amt<<" is widrawed";
    }

}

void Account::depositeBycheque(double amt){

    if(amt>50000){
        throw AccountException("Transaction out of limit");
    }
    else{
        withdraw(amt);
    }

}

void Account::cheackBalance(){
    std::cout<<"balance"<<this->balance;
}