#include <iostream>
#include <string>
#include "Books.h"

int Books::b_n = 1200;
int Books::count = 0;

void Books::show() const
{
    std::cout << "Book No:" << Book_no << std::endl;
    std::cout << "Book Name:" << Book_Name << std::endl;
    std::cout << "Quantity:" << quantity << std::endl;
    std::cout << "Price:" << price << std::endl;
    std::cout << std::endl;
};

void Books::printCount()
{
    std::cout << count << std::endl;
}
