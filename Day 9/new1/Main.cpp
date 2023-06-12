#include <iostream>
#include "Inventory.h"

int main()
{

    Inventory *inventory1 = new Inventory("Product 1", 50, 1);
    Inventory *inventory2 = new Inventory("Product 2", 30, 2);
    Inventory *inventory3 = new Inventory("Product 3", 40, 3);
    Inventory *inventory4 = new Inventory("Product 4", 25, 4);
    Inventory *inventory5 = new Inventory("Product 5", 60, 5);

    std::cout << "Inventory 1:\n";
    std::cout << "Description: " << inventory1->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory1->balanceStock() << "\n";
    std::cout << "Product Code: " << inventory1->getProductCode() << "\n\n";

    std::cout << "Inventory 2:\n";
    std::cout << "Description: " << inventory2->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory2->balanceStock() << "\n";
    std::cout << "Product Code: " << inventory2->getProductCode() << "\n\n";

    std::cout << "Inventory 3:\n";
    std::cout << "Description: " << inventory3->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory3->balanceStock() << "\n";
    std::cout << "Product Code: " << inventory3->getProductCode() << "\n\n";

    std::cout << "Inventory 4:\n";
    std::cout << "Description: " << inventory4->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory4->balanceStock() << "\n";
    std::cout << "Product Code: " << inventory4->getProductCode() << "\n\n";

    std::cout << "Inventory 5:\n";
    std::cout << "Description: " << inventory5->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory5->balanceStock() << "\n";
    std::cout << "Product Code: " << inventory5->getProductCode() << "\n\n";

    inventory1->purchase(10);
    inventory2->sale(5);


    std::cout << "Inventory 1 after purchase:\n";
    std::cout << "Description: " << inventory1->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory1->balanceStock() << "\n\n";

    std::cout << "Inventory 2 after sale:\n";
    std::cout << "Description: " << inventory2->descriptionOfProduct() << "\n";
    std::cout << "Stock: " << inventory2->balanceStock() << "\n\n";

  
    std::cout << "Searching for Inventory 3:\n";
    inventory3->search();
    std::cout << "\n";

    std::cout << "Searching for Inventory 4:\n";
    inventory4->search();
    std::cout << "\n";

   
    delete inventory1;
    delete inventory2;
    delete inventory3;
    delete inventory4;
    delete inventory5;

    return 0;
}
