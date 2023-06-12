#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>

class Inventory
{
private:
    std::string description_of_product;
    int balance_stock;
    int productcode;

public:
    Inventory();
    Inventory(std::string description, int stock, int code);

    std::string getDescription() const;
    void setDescription(const std::string &description);

    int getStock() const;
    void setStock(int stock);

    void setProductCode(int code);
    int getProductCode() const;

    void purchase(int quantity);
    void sale(int quantity);
    void search(int code) const;

    friend std::ostream &operator<<(std::ostream &os, const Inventory &inventory);
};

#endif
