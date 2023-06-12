#include <iostream>
#include "Inventory.h"

int main()
{

    Inventory *inventory1 = new Inventory("Product 1", 550, 1);
    Inventory *inventory2 = new Inventory("Product 2", 350, 2);
    Inventory *inventory3 = new Inventory("Product 3", 450, 3);
    Inventory *inventory4 = new Inventory("Product 4", 250, 4);
    Inventory *inventory5 = new Inventory("Product 5", 650, 5);

    std::cout << "Inventory 1:\n"<< *inventory1 << "\n";
    std::cout << "Inventory 2:\n"<< *inventory2 << "\n";
    std::cout << "Inventory 3:\n"<< *inventory3 << "\n";
    std::cout << "Inventory 4:\n"<< *inventory4 << "\n";
    std::cout << "Inventory 5:\n"<< *inventory5 << "\n";

    inventory1->purchase(100);
    inventory2->sale(50);

    std::cout << "Inventory 1 after purchase:\n"<< *inventory1 << "\n";
    std::cout << "Inventory 2 after sale:\n"<< *inventory2 << "\n";

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
