#include <iostream>
#include "account.h"
#include "accoutException.h"


int main(){

    Account a1("vaishnav",12341,40000);
    try{
    a1.display();
    a1.depositeBycheque(6000);
    }
    catch(AccountException &p){
        std::cout<<p.getMessage()<<std::endl;
    }

}