#include<iostream>

class Inventory{
    std::string description_of_product;
    int balance_stock; 
    int productcode;

    Inventory();//default Constructor
    Inventory(std::string dop,int bs,int pc);//parameterized constructor

public:
    std::string descriptionOfProduct() const { return description_of_product; }
    void setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

    int balanceStock() const { return balance_stock; }
    void setBalanceStock(int balanceStock) { balance_stock = balanceStock; }

    int getProductcode() const { return productcode; }
    void setProductcode(int productcode_) { productcode = productcode_; 
    

    void Inventory::purchase(int quantity);
    void Inventory::sale();
    void search(int code) const;

    }
};



















// //create an iNventory class that a warehouse might use to represent their stock of products and raw materials.
// Implement class inventory with following description.
// A.Data members
// i.description_of_product of type string.
// ii.balance_stock of type integer.
// iii.productcode of type int.

// B.Member Functions
// i.deafult constructor - initial product stock size should be greater than 20,
// which is company's minimum stock level.
// ii.parameterized constructor- validate the initial product to ensure it has a stock greater than 20, which is company's minimum stock level.
// iii.getter functions for all attributes.
// iv.setter funcitons for all attributes.
// v.purchase function-it should add a product to the current stock.
// vi. sale function- it should reduce stock.ensure after each sale that the stock level does not drop below 20.
// vii. search function to find details of particular product.display appropriate message if product not found.
// viii. Overload<<operator to display product details.
// C.Create 5 objects of Inventory class on heap and display their details.
// D.Test the member function purchase(),sale() and search().
// E. Free memory allocated on heap.
// code should be implemented in three files Inventory.h,Inventory.cpp, Main.cpp