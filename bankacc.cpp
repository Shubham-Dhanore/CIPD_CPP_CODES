#include<iostream>

class bankAccount
{
    int accno;
    double balance;
public:

bankAccount(){
    accno = 201112;
    balance = 12000;
}
void show()
{
    std::cout<<accno<<" "<<balance<<std::endl;
}

//BankAccount
//member INitializer List
bankAccount(int no,double b):accno(no),balance(b)
{

}
};
int main(){
bankAccount b1; //b1 is an object of bankAccount class
b1.show();//object.functionname()
return 0;
}
