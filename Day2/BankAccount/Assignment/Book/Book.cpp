#include <iostream>
#include "Book.h"

void global_call()
{
    Books b5(9, "Gulliver’s Travels", 7, 334.51);
    std::cout << b5.GetBookNo() << std::endl;
    std::cout << b5.GetBookName() << std::endl;
    std::cout << b5.getQuntity() << std::endl;
    std::cout << b5.getPrice() << std::endl;
}