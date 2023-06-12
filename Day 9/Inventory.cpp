#include <iostream>
#include "Inventory.h"

Inventory::Inventory()//default Constructor
{
    description_of_product = "All Okay";
    balance_stock = 25;
    productcode = 100;
}

Inventory::Inventory(std::string dop, int bs, int pc) // parameterized constructor
{
    if (bs > 20)
        balance_stock = bs;
    else
        balance_stock = 20;

    description_of_product = dop;
    productcode = pc;
}
void Inventory::purchase(int quantity) {
    balance_stock += quantity;
}

void Inventory::sale(int quantity){
    if(balance_stock - quantity >=20)
        balance_stock -= quantity;
    else 
        std::cout << "Insufficient Stock, Sale will not processed."<<std::endl;
}
void Inventory::search(int code) const
{
    if(productcode == code) {
        std::cout<<"Product Description: "<<description_of_product<<std::endl;
        std::cout<<"Stock"<<balance_stock << std::endl;
        std::cout<<"Product Code"<<productcode<<std::endl;
    }else{
        std::cout << "Product Not Found "<<std::endl;
    }
}
