#include <iostream>
#include "Inventory.h"

int main() {
    // Create 5 objects of Inventory class on the heap
    Inventory* inventory1 = new Inventory("Product 1", 50, 1001);
    Inventory* inventory2 = new Inventory("Product 2", 30, 1002);
    Inventory* inventory3 = new Inventory("Product 3", 25, 1003);
    Inventory* inventory4 = new Inventory("Product 4", 40, 1004);
    Inventory* inventory5 = new Inventory("Product 5", 35, 1005);

    // Display details of the inventory objects
    std::cout << *inventory1 << std::endl;
    std::cout << *inventory2 << std::endl;
    std::cout << *inventory3 << std::endl;
    std::cout << *inventory4 << std::endl;
    std::cout << *inventory5 << std::endl;

    // Test the member functions
    inventory1->purchase(10);
    inventory1->sale(5);
    inventory1->search(1001);

    // Free memory allocated on the heap
    delete inventory1;
    delete inventory2;
    delete inventory3;
    delete inventory4;
    delete inventory5;

    return 0;
}


// .cpp?
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


// .h
#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>

class Inventory {
private:
    std::string description_of_product;
    int balance_stock;
    int productcode;

public:
    Inventory();
    Inventory(std::string description, int stock, int code);
    
    // Getter functions
    std::string getDescription() const;
    int getStock() const;
    int getProductCode() const;

    // Setter functions
    void setDescription(const std::string& description);
    void setStock(int stock);
    void setProductCode(int code);

    void purchase(int quantity);
    void sale(int quantity);
    void search(int code) const;

    friend std::ostream& operator<<(std::ostream& os, const Inventory& inventory);
};

#endif



#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

class Inventory {
private:
    std::string description_of_product;
    int balance_stock;
    int productcode;

public:
    Inventory();
    Inventory(const std::string& description, int stock, int code);

    std::string descriptionOfProduct() const;
    void setDescriptionOfProduct(const std::string& descriptionOfProduct);

    int balanceStock() const;
    void setBalanceStock(int balanceStock);

    int getProductCode() const;
    void setProductCode(int productcode_);

    void purchase(int quantity);
    void sale(int quantity);
    void search() const;

    friend std::ostream& operator<<(std::ostream& os, const Inventory& inventory);
};

#endif  // INVENTORY_H


#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
    description_of_product = "Unknown";
    balance_stock = 0;
    productcode = 0;
}

Inventory::Inventory(const std::string& description, int stock, int code) {
    if (stock >= 20) {
        description_of_product = description;
        balance_stock = stock;
        productcode = code;
    } else {
        std::cout << "Initial stock must be greater than or equal to 20.\n";
        // Set default values
        description_of_product = "Unknown";
        balance_stock = 0;
        productcode = 0;
    }
}

std::string Inventory::descriptionOfProduct() const {
    return description_of_product;
}

void Inventory::setDescriptionOfProduct(const std::string& descriptionOfProduct) {
    description_of_product = descriptionOfProduct;
}

int Inventory::balanceStock() const {
    return balance_stock;
}

void Inventory::setBalanceStock(int balanceStock) {
    balance_stock = balanceStock;
}

int Inventory::getProductCode() const {
    return productcode;
}

void Inventory::setProductCode(int productcode_) {
    productcode = productcode_;
}

void Inventory::purchase(int quantity) {
    balance_stock += quantity;
}

void Inventory::sale(int quantity) {
    if (balance_stock - quantity >= 20) {
        balance_stock -= quantity;
    } else {
        std::cout << "Sale quantity exceeds available stock. Minimum stock level is 20.\n";
    }
}

void Inventory::search() const {
    if (balance_stock > 0) {
        std::cout << "Product Description: " << description_of_product << "\n";
        std::cout << "Product Stock: " << balance_stock << "\n";
        std::cout << "Product Code: " << productcode << "\n";
    } else {
        std::cout << "Product not found in the inventory.\n";
    }
}

std::ostream& operator<<(std::ostream& os, const Inventory& inventory) {
    os << "Product Description: " << inventory.description_of_product << "\n";
    os << "Product Stock: " << inventory.balance_stock << "\n";
    os << "Product Code: " << inventory.productcode << "\n";
    return os;
}
