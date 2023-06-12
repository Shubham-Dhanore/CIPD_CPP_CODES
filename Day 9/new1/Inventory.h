#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>

class Inventory
{
private:
    std::string description_of_product;
    int balance_stock;
    int productcode;

public:
    Inventory();
    Inventory(const std::string &description, int stock, int code);

    std::string descriptionOfProduct() const;
    void setDescriptionOfProduct(const std::string &descriptionOfProduct);

    int balanceStock() const;
    void setBalanceStock(int balanceStock);

    int getProductCode() const;
    void setProductCode(int productcode_);

    void purchase(int quantity);
    void sale(int quantity);
    void search() const;

    friend std::ostream &operator<<(std::ostream &os, const Inventory &inventory);
};

#endif // INVENTORY_H