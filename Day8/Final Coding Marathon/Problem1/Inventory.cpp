#include "Inventory.h"
#include <iostream>

Inventory::Inventory()//default constructor
{
    description_of_product = "All Okay";
    balance_stock = 20;
    productcode = 0;
}

Inventory::Inventory(const std::string &description, int stock, int code)//parameterized constructor
{
     description_of_product = description;
    productcode = code;
    if (stock >= 20)
    {
        balance_stock = stock;
        
    }
    else
    {
        std::cout << "Initial stock must be greater than or equal to 20. Setting default stock to 20.\n";
       // description_of_product = description;
        balance_stock = 20;
        //productcode = code;
    }
}

std::string Inventory::getDescriptionOfProduct() const
{
    return description_of_product;
}

void Inventory::setDescriptionOfProduct(const std::string &descriptionOfProduct)
{
    description_of_product = descriptionOfProduct;
}

int Inventory::getBalanceStock() const
{
    return balance_stock;
}

void Inventory::setBalanceStock(int balanceStock)
{
    balance_stock = balanceStock;
}

int Inventory::getProductCode() const
{
    return productcode;
}

void Inventory::setProductCode(int productcode_)
{
    productcode = productcode_;
}

void Inventory::purchase(int quantity)
{
    balance_stock += quantity;
}

void Inventory::sale(int quantity)
{
    if (balance_stock - quantity >= 20)
    {
        balance_stock -= quantity;
    }
    else
    {
        std::cout << "Sale quantity exceeds . Minimum stock level is 20.\n";
    }
}

void Inventory::search() const
{
    if (balance_stock > 0)
    {
        std::cout << "Product Description: " << description_of_product << "\n";
        std::cout << "Product Stock: " << balance_stock << "\n";
        std::cout << "Product Code: " << productcode << "\n";
    }
    else
    {
        std::cout << "Product not found in the inventory.\n";
    }
}

std::ostream &operator<<(std::ostream &os, const Inventory &inventory)
{
    os << "Product Description: " << inventory.description_of_product << "\n";
    os << "Product Stock: " << inventory.balance_stock << "\n";
    os << "Product Code: " << inventory.productcode << "\n";
    return os;
}
