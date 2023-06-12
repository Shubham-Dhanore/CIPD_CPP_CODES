#include "Inventory.h"

Inventory::Inventory() {
    balance_stock = 20;
}

Inventory::Inventory(std::string description, int stock, int code) {
    if (stock > 20)
        balance_stock = stock;
    else
        balance_stock = 20;
    
    description_of_product = description;
    productcode = code;
}

std::string Inventory::getDescription() const {
    return description_of_product;
}

int Inventory::getStock() const {
    return balance_stock;
}

int Inventory::getProductCode() const {
    return productcode;
}

void Inventory::setDescription(const std::string& description) {
    description_of_product = description;
}

void Inventory::setStock(int stock) {
    if (stock >= 20)
        balance_stock = stock;
    else
        balance_stock = 20;
}

void Inventory::setProductCode(int code) {
    productcode = code;
}

void Inventory::purchase(int quantity) {
    balance_stock += quantity;
}

void Inventory::sale(int quantity) {
    if (balance_stock - quantity >= 20)
        balance_stock -= quantity;
    else
        std::cout << "Insufficient stock. Sale not processed." << std::endl;
}

void Inventory::search(int code) const {
    if (productcode == code) {
        std::cout << "Product Description: " << description_of_product << std::endl;
        std::cout << "Stock: " << balance_stock << std::endl;
        std::cout << "Product Code: " << productcode << std::endl;
    } else {
        std::cout << "Product not found." << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Inventory& inventory) {
    os << "Product Description: " << inventory.description_of_product << std::endl;
    os << "Stock: " << inventory.balance_stock << std::endl;
    os << "Product Code: " << inventory.productcode << std::endl;
    return os;
}
