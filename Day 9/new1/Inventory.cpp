#include "Inventory.h"
#include <iostream>

Inventory::Inventory()
{
    description_of_product = "Unknown";
    balance_stock = 0;
    productcode = 0;
}

Inventory::Inventory(const std::string &description, int stock, int code)
{
    if (stock >= 20)
    {
        description_of_product = description;
        balance_stock = stock;
        productcode = code;
    }
    else
    {
        std::cout << "Initial stock must be greater than or equal to 20.\n";
        // Set default values
        description_of_product = "Unknown";
        balance_stock = 0;
        productcode = 0;
    }
}

std::string Inventory::descriptionOfProduct() const
{
    return description_of_product;
}

void Inventory::setDescriptionOfProduct(const std::string &descriptionOfProduct)
{
    description_of_product = descriptionOfProduct;
}

int Inventory::balanceStock() const
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
        std::cout << "Sale quantity exceeds available stock. Minimum stock level is 20.\n";
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